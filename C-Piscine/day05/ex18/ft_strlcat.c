/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 13:30:02 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/18 10:12:19 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int characters;

	characters = 0;
	while (*dest && size)
	{
		dest++;
		characters++;
		size--;
	}
	while (*src)
	{
		if (size > 1)
		{
			*dest++ = *src;
			size--;
		}
		src++;
		characters++;
	}
	if (size)
		*dest = '\0';
	return (characters);
}
