/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:16:09 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/13 10:23:34 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	current;

	if (nb <= 1)
	{
		return (0);
	}
	current = 2;
	while (current <= nb / 2)
	{
		if (nb % current == 0)
		{
			return (0);
		}
		current++;
	}
	return (1);
}
