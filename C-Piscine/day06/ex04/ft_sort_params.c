/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 13:35:54 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/19 14:19:00 by rtibrewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1++ == *s2++)
		;
	return (*(s1 - 1) - *(s2 - 1));
}

void	sort_integer(int argc, char *argv[])
{
	int		iter;
	char	**str_iter;
	char	**min;
	char	*temp;

	iter = 1;
	while (iter < argc - 1)
	{
		min = argv + iter;
		str_iter = min + 1;
		while (*str_iter)
		{
			if (ft_strcmp(*str_iter, *min) < 0)
				min = str_iter;
			str_iter++;
		}
		temp = *min;
		*min = *(argv + iter);
		*(argv + iter) = temp;
		iter++;
	}
}

int		main(int argc, char *argv[])
{
	sort_integer(argc, argv);
	argv++;
	while (*argv)
	{
		ft_putstr(*argv);
		ft_putchar('\n');
		argv++;
	}
}