/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 09:31:44 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/08 09:32:07 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a < 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_comb(char a, char b, char c)
{
	if (c > b && c < 57)
	{
		ft_print(a, b, c);
		c++;
		ft_comb(a, b, c);
	}
	else if (c == 57 && b < 56)
	{
		ft_print(a, b, c);
		b++;
		c = b + 1;
		ft_comb(a, b, c);
	}
	else if (b == 56 && a < 55)
	{
		ft_print(a, b, c);
		a++;
		b = a + 1;
		c = b + 1;
		ft_comb(a, b, c);
	}
	else if (a == 55)
	{
		ft_print(a, b, c);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 48;
	b = 49;
	c = 50;
	ft_comb(a, b, c);
}
