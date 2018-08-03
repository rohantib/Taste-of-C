/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:44:00 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/17 10:51:59 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *iter;

	iter = str;
	while (*iter)
	{
		if (*iter >= 'A' && *iter <= 'Z')
			*iter += 'a' - 'A';
		iter++;
	}
	return (str);
}
