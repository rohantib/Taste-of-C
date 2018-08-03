/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 10:35:15 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/19 10:57:59 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	current;
	int		digit;

	digit = nb % 10;
	nb /= 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		digit *= -1;
	}
	current = '0' + digit;
	if (nb >= 1)
	{
		ft_putnbr(nb);
	}
	ft_putchar(current);
}
