/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 13:46:22 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/23 13:06:40 by rtibrewa         ###   ########.fr       */
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
