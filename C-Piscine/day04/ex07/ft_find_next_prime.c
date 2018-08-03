/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:25:24 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/13 10:42:44 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;

	while (1)
	{
		nb++;
		if (nb <= 1)
		{
			continue;
		}
		i = 2;
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				break ;
			}
			i++;
		}
		if (nb == 2 || nb % i != 0)
		{
			return (nb);
		}
	}
	return (0);
}
