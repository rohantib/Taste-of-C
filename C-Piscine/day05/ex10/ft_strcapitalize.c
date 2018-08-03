/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:53:38 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/17 11:06:35 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_numeric(char c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		is_new_word;
	char	*iter;

	is_new_word = 1;
	iter = str;
	while (*iter)
	{
		if (is_new_word && *iter >= 'a' && *iter <= 'z')
			*iter += 'A' - 'a';
		else if (!is_new_word && *iter >= 'A' && *iter <= 'Z')
			*iter += 'a' - 'A';
		if (is_alpha_numeric(*iter))
			is_new_word = 0;
		else
			is_new_word = 1;
		iter++;
	}
	return (str);
}
