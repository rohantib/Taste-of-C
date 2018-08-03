/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 10:11:48 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/20 10:26:04 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		char_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}

void	print_digit(int digit)
{
	if (digit < 10)
		ft_putchar('0' + digit);
	else if (digit <= 16 && digit >= 10)
		ft_putchar('a' + (digit - 10));
}

void	print_hex(char c)
{
	int d1;
	int d2;

	d1 = c / 16;
	d2 = c % 16;
	ft_putchar('\\');
	print_digit(d1);
	print_digit(d2);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (char_is_printable(*str))
			ft_putchar(*str);
		else
			print_hex(*str);
		str++;
	}
}
