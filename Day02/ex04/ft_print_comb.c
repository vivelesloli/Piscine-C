/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:23:16 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/03 02:09:36 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void	ft_print(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i < 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_comb(char i, char j, char k)
{
	if (k > j && k < 57)
	{
		ft_print(i, j, k);
		k++;
		ft_comb(i, j, k);
	}
	else if (k == 57 && j < 56)
	{
		ft_print(i, j, k);
		j++;
		k = j + 1;
		ft_comb(i, j, k);
	}
	else if (j == 56 && i < 55)
	{
		ft_print(i, j, k);
		i++;
		j = i + 1;
		k = j + 1;
		ft_comb(i, j, k);
	}
	else if (i == 55)
	{
		ft_print(i, j, k);
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = 48;
	j = 49;
	k = 50;
	ft_comb(i, j, k);
}
