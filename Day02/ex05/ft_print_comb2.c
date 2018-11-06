/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 04:55:36 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/08 09:43:19 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = 48;
	b = 48;
	c = 48;
	d = 49;
	ft_comb(a, b, c, d);
}

void	ft_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a <= 57)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_comb(char a, char b, char c, char d)
{
	if (d < 57)
	{
		ft_print(a, b, c, d);
		d++;
		ft_comb(a, b, c, d);
	}
	else if (d == 57 && c < 57)
	{
		ft_print(a, b, c, d);
		c++;
		d = 48 + 1;
		ft_comb(a, b, c, d);
	}
	else if (c == 57 && b < 57)
	{
		ft_print(a, b, c, d);
		b++;
		c = 48;
		d = 49 + 1;
		ft_comb(a, b, c, d);
	}
	else if (b == 57 && a < 57)
	{
		ft_print(a, b, c, d);
		a++;
		b = 48;
		c = 49 + 1;
		ft_comb(a, b, c, d);
	}
	else if (a == 57)
	{
		ft_print(a, b, c, d);
	}
}
