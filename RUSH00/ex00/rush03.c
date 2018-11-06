/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 10:57:14 by tcollard          #+#    #+#             */
/*   Updated: 2017/08/05 16:00:39 by tcollard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rush(int x, int y);
void	ft_extrem_putchar(int width);
void	ft_mid_putchar(int width);
int		ft_putchar(char c);

char	rush(int x, int y)
{
	int		hight;
	int		width;

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
			ft_putchar('A');
		if (width > 1)
		{
			if (position == width - 1)
				ft_putchar('C');
			if (!(position == 0 || position == (width - 1)))
				ft_putchar('B');
		}
		position++;
	}
}

void	ft_mid_putchar(int width)
{
	int		position;

	position = 0;
	while (position < width)
	{
		if (position == 0 || position == width - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		position++;
	}
}
