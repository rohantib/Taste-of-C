/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:11:14 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/16 13:15:05 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *substr_iter;
	char *str_iter;

	while (*str)
	{
		substr_iter = to_find;
		str_iter = str;
		while (*substr_iter && *str_iter == *substr_iter)
		{
			str_iter++;
			substr_iter++;
		}
		if (!*substr_iter)
			return (str);
		str++;
	}
	return (0);
}
