/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 06:24:30 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/09 04:37:23 by matcharr         ###   ########.fr       */
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

	i = ac;
	while (--i > 0)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
