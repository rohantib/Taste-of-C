/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:42:26 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/18 14:14:53 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_valid_base(char *base)
{
	int		size;
	char	*iter;
	char	*original;

	size = 0;
	original = base;
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		iter = original;
		while (iter < base)
		{
			if (*iter == *base)
				return (0);
			iter++;
		}
		size++;
		base++;
	}
	if (size <= 1)
		return (0);
	return (size);
}

void	ft_putnbr_rec(int nbr, char *base, int size)
{
	int quotient;
	int digit;

	quotient = nbr / size;
	digit = nbr % size;
	if (nbr < 0)
	{
		ft_putchar('-');
		quotient *= -1;
		digit *= -1;
	}
	if (quotient > 0)
		ft_putnbr_rec(quotient, base, size);
	ft_putchar(base[digit]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = is_valid_base(base);
	if (size)
	{
		ft_putnbr_rec(nbr, base, size);
	}
}
