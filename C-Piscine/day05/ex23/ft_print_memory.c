/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 12:54:11 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/23 09:57:35 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstrl(char *addr, unsigned int length)
{
	while (length > 0)
	{
		if (!(*addr >= 32 && *addr <= 126))
			ft_putchar('.');
		else
			ft_putchar(*addr);
		length--;
		addr++;
	}
}

void	print_digit(int digit)
{
	if (digit < 10)
		ft_putchar('0' + digit);
	else if (digit <= 16 && digit >= 10)
		ft_putchar('a' + (digit - 10));
}

void	print_addr(long num, int current_pos)
{
	if (current_pos < 8)
	{
		print_addr(num / 16, current_pos + 1);
		print_digit(num % 16);
	}
}

int		print_hex_str(char *addr, int current_pos, int size)
{
	int num_printed;
	int count1;
	int count2;

	num_printed = 0;
	count1 = 0;
	while (count1++ < 8)
	{
		count2 = 0;
		while (count2++ < 2)
		{
			if (current_pos <= size)
			{
				print_digit(addr[current_pos] / 16);
				print_digit(addr[current_pos] % 16);
				num_printed++;
			}
			else
				ft_putstrl("  ", 2);
			current_pos++;
		}
		ft_putchar(' ');
	}
	return (num_printed);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		num_printed;
	int		num_printed_on_line;

	num_printed = 0;
	while (num_printed < (int)size)
	{
		print_addr((long)addr + num_printed, 0);
		ft_putchar(':');
		ft_putchar(' ');
		num_printed_on_line = print_hex_str(addr, num_printed, size);
		ft_putchar(' ');
		ft_putstrl(addr + num_printed, num_printed_on_line);
		num_printed += num_printed_on_line;
		ft_putchar('\n');
	}
	return (addr);
}
