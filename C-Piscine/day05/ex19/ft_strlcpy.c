/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:12:59 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/18 10:38:38 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int length;

	length = 0;
	while (*src)
	{
		if (size > 1)
		{
			*dest++ = *src;
			size--;
		}
		src++;
		length++;
	}
	if (size)
	{
		*dest = '\0';
	}
	return (length);
}
