/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:14:00 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/10 03:25:42 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int i;

	i = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else if (i / 10 == 0)
		ft_putchar(i % 10 + '0');
	else
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + '0');
	}
}

int		ft_max(int *tab, int length)
{
	int i;
	int max;
	int nb;

	i = -1;
	max = *tab;
	while (++i < length)
	{
		if (max < *tab)
			max = *tab;
		tab++;
	}
	return (max);
}
