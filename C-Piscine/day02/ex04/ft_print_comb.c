/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:45:43 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/23 13:03:44 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	output_chars(char d1, char d2, char d3)
{
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(d3);
	if (d1 != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char d1;
	char d2;
	char d3;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				output_chars(d1, d2, d3);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
