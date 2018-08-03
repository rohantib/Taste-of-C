/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:49:15 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/18 14:55:42 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_2digit(int num)
{
	char d1;
	char d2;

	d2 = '0' + num % 10;
	d1 = '0' + num / 10;
	ft_putchar(d1);
	ft_putchar(d2);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_2digit(num1);
			ft_putchar(' ');
			ft_print_2digit(num2);
			if (num1 != 98 || num2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}
}
