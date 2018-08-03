/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:19:23 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/19 10:52:29 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int *current;
	int *min;
	int *inner;
	int temp;

	current = tab;
	while (current < tab + size - 1)
	{
		min = current;
		inner = min + 1;
		while (inner < tab + size)
		{
			if (*inner < *min)
			{
				min = inner;
			}
			inner++;
		}
		temp = *min;
		*min = *current;
		*current = temp;
		current++;
	}
}
