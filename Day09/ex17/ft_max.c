/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdankou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:27:56 by mdankou           #+#    #+#             */
/*   Updated: 2017/08/11 15:19:00 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
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
	if (i / 10 == 0)
	{
		ft_putchar(i % 10 + '0');
	}
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

	i = 0;
	max = *tab;
	while (i < length)
	{
		if (max < *tab)
		{
			max = *tab;
		}
		i++;
		tab++;
	}
	return (max);
}
