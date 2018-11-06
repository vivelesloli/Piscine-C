/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 06:23:23 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/05 15:08:26 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = -1;
	while (str[++a])
		ft_putchar(str[a]);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 0)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
