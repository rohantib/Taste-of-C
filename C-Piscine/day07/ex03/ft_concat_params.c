/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:43:56 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/24 10:37:12 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int		concat_len(char **argv)
{
	int str_len;

	str_len = 0;
	while (*argv)
	{
		str_len += ft_strlen(*argv) + 1;
		argv++;
	}
	return (str_len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		str_len;
	char	*concat;
	char	*original;

	if (!argc)
		return (0);
	argv++;
	str_len = concat_len(argv);
	concat = (char *)malloc(sizeof(char) * str_len);
	original = concat;
	while (*argv)
	{
		while (**argv)
		{
			*concat = **argv;
			concat++;
			(*argv)++;
		}
		*concat++ = '\n';
		argv++;
	}
	*(concat - 1) = '\0';
	return (original);
}
