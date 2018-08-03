/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:30:17 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/24 11:27:44 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int		word_count(char *str)
{
	int		new_word;
	int		num_words;

	new_word = 1;
	num_words = 0;
	while (*str)
	{
		if (ft_isspace(*str))
			new_word = 1;
		else if (new_word)
		{
			new_word = 0;
			num_words++;
		}
		str++;
	}
	return (num_words);
}

char	*dup_word(char *start, char *end)
{
	char	*str;
	char	*original;

	str = (char *)malloc(sizeof(char) * (end - start + 1));
	original = str;
	while (start < end)
	{
		*str = *start;
		str++;
		start++;
	}
	*str = '\0';
	return (original);
}

void	create_words(char **arr, char *str)
{
	int		new_word;
	char	*begin;

	new_word = 1;
	while (*str)
	{
		if (ft_isspace(*str) && !new_word)
		{
			new_word = 1;
			*arr = dup_word(begin, str);
			arr++;
		}
		else if (!ft_isspace(*str) && new_word)
		{
			begin = str;
			new_word = 0;
		}
		str++;
	}
	if (!new_word)
		*arr = dup_word(begin, str);
}

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**word_arr;

	words = word_count(str);
	word_arr = (char **)malloc(sizeof(char *) * (words + 1));
	word_arr[words] = 0;
	create_words(word_arr, str);
	return (word_arr);
}
