/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:30:35 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/24 10:36:47 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int index;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	index = 0;
	while (min < max)
	{
		arr[index] = min;
		index++;
		min++;
	}
	return (arr);
}
