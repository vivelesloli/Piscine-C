/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 16:30:24 by svieira           #+#    #+#             */
/*   Updated: 2017/08/05 20:23:52 by svieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rush(int x, int y);
void	ft_extrem_putchar(int width);
void	ft_mid_putchar(int width);
int		ft_putchar(char c);

char	rush(int x, int y)
{
	int hight;
	int width;

	hight = 0;
	width = 0;
	if (x > 0 && y > 0)
	{
		while (hight < y)
		{
			if (hight != 0)
				ft_putchar('\n');
			if (hight == 0 || hight == (y - 1))
				ft_extrem_putchar(x);
			else
			{
				ft_mid_putchar(x);
			}
			hight++;
		}
		ft_putchar('\n');
	}
	return (0);
}

void	ft_extrem_putchar(int width)
{
	int		position;

	position = 0;
	while (position < width)
	{
		if (position == 0)
			ft_putchar('o');
		if (width > 1)
		{
			if (position == width - 1)
				ft_putchar('o');
			if (!(position == 0 || position == (width - 1)))
				ft_putchar('-');
		}
		position++;
	}
}

void	ft_mid_putchar(int width)
{
	int	position;

	position = 0;
	while (position < width)
	{
		if (position == 0 || position == width - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		position++;
	}
}
