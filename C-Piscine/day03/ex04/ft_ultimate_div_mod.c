/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:48:04 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/19 10:34:08 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}
