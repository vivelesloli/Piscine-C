/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:02:04 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/17 06:19:37 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int a;

	a = -1;
	while (str[++a])
		ft_putchar(str[a]);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = nb * -1;
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

void	ft_print_words_tables(char **tab)
{
	int x;
	int y;

	x = -1;
	while (tab[++x])
	{
		y = -1;
		while (tab[x][++y])
			ft_putchar(tab[x][y]);
		ft_putchar('\n');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
	}
	par[i].str = 0;
}
