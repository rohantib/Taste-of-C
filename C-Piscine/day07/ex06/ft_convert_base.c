/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 13:11:11 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/25 11:31:23 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct	s_base
{
	char	*base_str;
	int		size;
};

int		is_valid_base(char *base)
{
	int		size;
	char	*iter;
	char	*original;

	size = 0;
	original = base;
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		iter = original;
		while (iter < base)
		{
			if (*iter == *base)
				return (0);
			iter++;
		}
		size++;
		base++;
	}
	if (size <= 1)
		return (0);
	return (size);
}

int		parse_front(char **point)
{
	int multiplier;

	multiplier = 1;
	while (**point == '\r' || **point == '\t' || **point == '\n'
		|| **point == '\v' || **point == '\f' || **point == ' ')
		(*point)++;
	if (**point == '-' || **point == '+')
	{
		if (**point == '-')
			multiplier = -1;
		(*point)++;
	}
	return (multiplier);
}

int		*ft_atoi_base(char *str, char *base, int *num)
{
	int size;
	int	multiplier;
	int digit;

	size = is_valid_base(base);
	if (!size)
		return (0);
	multiplier = parse_front(&str);
	*num = 0;
	while (*str)
	{
		digit = 0;
		while (base[digit] && base[digit] != *str)
			digit++;
		if (digit == size)
			return (0);
		*num *= size;
		*num += digit;
		str++;
	}
	*num *= multiplier;
	return (num);
}

char	*convert(int num, struct s_base *base, int *current, int length)
{
	int		digit;
	char	*converted;

	digit = num % base->size;
	num /= base->size;
	if (!num)
	{
		if (digit < 0)
		{
			converted = (char *)malloc(sizeof(char) * (length++ + 2));
			converted[0] = '-';
			*current = 1;
		}
		else
			converted = (char *)malloc(sizeof(char) * (length + 1));
		converted[length] = '\0';
	}
	else
		converted = convert(num, base, current, length + 1);
	if (digit < 0)
		digit *= -1;
	converted[*current] = base->base_str[digit];
	*current += 1;
	return (converted);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				size2;
	int				num;
	char			*conversion;
	int				current_ind;
	struct s_base	output_base;

	if (!ft_atoi_base(nbr, base_from, &num))
		return (0);
	size2 = is_valid_base(base_to);
	if (!size2)
		return (0);
	current_ind = 0;
	output_base.base_str = base_to;
	output_base.size = size2;
	conversion = convert(num, &output_base, &current_ind, 1);
	return (conversion);
}
