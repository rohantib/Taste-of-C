/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:59:14 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/23 13:11:00 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printdigits(char str[])
{
	int is_last;

	is_last = 1;
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
		if (*str != '\0' && (*str) - *(str - 1) != 1)
		{
			is_last = 0;
		}
	}
	if (!(is_last && *(str - 1) == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_combn_rec(int size, int n, char digits[])
{
	int current;

	current = size - n;
	while (digits[current] <= '9' - (n - 1))
	{
		if (n > 1)
		{
			digits[current + 1] = digits[current] + 1;
			ft_combn_rec(size, n - 1, digits);
		}
		else
		{
			ft_printdigits(digits);
		}
		digits[current]++;
	}
}

void	ft_print_combn(int n)
{
	char digits[n + 1];

	if (n > 0 && n < 11)
	{
		digits[0] = '0';
		digits[n] = '\0';
		ft_combn_rec(n, n, digits);
	}
}
