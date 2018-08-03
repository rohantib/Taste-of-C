/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 10:51:06 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/24 10:36:08 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int len;

	len = 0;
	while (*src)
	{
		src++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char *dup;
	char *original;

	dup = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	original = dup;
	while (*src)
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = '\0';
	return (original);
}
