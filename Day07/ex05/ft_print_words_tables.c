/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 07:55:56 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/09 11:35:44 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

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
