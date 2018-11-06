/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 01:53:22 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/06 20:38:06 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_print_toplane(int x);
void	ft_print_midlane(int x);
void	ft_print_botlane(int x);

void	ft_print_toplane(int x)
{
	char	a;

	a = 0;
	ft_putchar('/');
	while (a < x - 2)
	{
		ft_putchar('*');
		a++;
		if (a == x - 2)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
	}
}

void	ft_print_midlane(int x)
{
	char	b;

	b = 0;
	ft_putchar('*');
	while (b < x - 2)
	{
		ft_putchar(' ');
		b++;
		if (b == x - 2)
		{
			ft_putchar('*');
			ft_putchar('\n');
		}
	}
}

void	ft_print_botlane(int x)
{
	char	c;

	c = 0;
	ft_putchar('\\');
	while (c < x - 2)
	{
		ft_putchar('*');
		c++;
		if (c == x - 2)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	char	a;
	char	b;
	char	c;
	int		count;

	count = 2;
	a = 0;
	b = 0;
	c = 0;
	if (!(x == 0 || y == 0))
	{
		ft_print_toplane(x);
	}
	while (count < y)
	{
		ft_print_midlane(x);
		count++;
	}
	if (count == y && y > 1)
	{
		ft_print_botlane(x);
	}
}
