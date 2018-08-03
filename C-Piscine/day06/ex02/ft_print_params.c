/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtibrewa <rtibrewa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 12:56:57 by rtibrewa          #+#    #+#             */
/*   Updated: 2018/07/19 13:22:18 by rtibrewa         ###   ########.fr       */
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

int main(int argc, char *argv[])
{
	argv++;
	if (argc > 1)
		while (*argv)
		{
			ft_putstr(*argv);
			ft_putchar('\n');
			argv++;
		}

}
