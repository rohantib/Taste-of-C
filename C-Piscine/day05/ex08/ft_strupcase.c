/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:40:29 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/17 10:52:04 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *iter;

	iter = str;
	while (*iter)
	{
		if (*iter >= 'a' && *iter <= 'z')
			*iter += 'A' - 'a';
		iter++;
	}
	return (str);
}
