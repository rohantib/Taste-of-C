/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:39:12 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/13 10:15:50 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	current;

	result = 0;
	current = 0;
	while (current * current <= nb)
	{
		if (current * current == nb)
		{
			result = current;
		}
		current++;
	}
	return (result);
}
