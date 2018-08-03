/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:43:13 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/13 13:02:41 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clear_all(int *list, int size)
{
	size--;
	while (size >= 0)
	{
		list[size] = 0;
		size--;
	}
}

void	not_remaining(int *positions, int *not_remaining_rows, int col_num)
{
	int diagonal1;
	int diagonal2;
	int current;

	current = 0;
	while (current < col_num)
	{
		not_remaining_rows[positions[current] - 1] = 1;
		diagonal1 = positions[current] - (col_num - current);
		diagonal2 = positions[current] + (col_num - current);
		if (diagonal1 >= 1)
		{
			not_remaining_rows[diagonal1 - 1] = 1;
		}
		if (diagonal2 <= 8)
		{
			not_remaining_rows[diagonal2 - 1] = 1;
		}
		current++;
	}
}

int		ft_queens_rec(int *positions, int col_num)
{
	int total;
	int i;
	int not_remaining_rows[8];

	if (col_num > 7)
	{
		return (1);
	}
	clear_all(not_remaining_rows, 8);
	not_remaining(positions, not_remaining_rows, col_num);
	total = 0;
	i = 0;
	while (i < 8)
	{
		if (!not_remaining_rows[i])
		{
			positions[col_num] = i + 1;
			total += ft_queens_rec(positions, col_num + 1);
		}
		i++;
	}
	return (total);
}

int		ft_eight_queens_puzzle(void)
{
	int positions[8];

	clear_all(positions, 8);
	return (ft_queens_rec(positions, 0));
}
