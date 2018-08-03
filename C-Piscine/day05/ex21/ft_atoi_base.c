/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:03:51 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/24 14:35:37 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		translate_char(char digit, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == digit)
			return (i);
		i++;
	}
	return (-1);
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

int		ft_atoi_base(char *str, char *base)
{
	int size;
	int	num;
	int	multiplier;
	int digit;

	size = is_valid_base(base);
	if (!size)
		return (0);
	multiplier = parse_front(&str);
	num = 0;
	while (*str)
	{
		digit = translate_char(*str, base);
		if (digit < 0)
			return (0);
		num *= size;
		num += digit;
		str++;
	}
	return (num * multiplier);
}
