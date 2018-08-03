/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:59:14 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/19 10:42:45 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *front;
	char *original;
	char temp;

	front = str;
	original = str;
	while (*str != '\0')
	{
		str++;
	}
	str--;
	while (front < str)
	{
		temp = *front;
		*front = *str;
		*str = temp;
		front++;
		str--;
	}
	return (original);
}
