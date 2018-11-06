/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 01:24:07 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/02 09:12:57 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	data;
	int	x;
	int	y;

	x = 0;
	while (tab[x])
		x++;
	if (x < size)
		return(0);
	y = 0;
	while (++y < size)
	{
		x = -1;
		while (++x < size - 1)
		{
			if (tab[x + 1] < tab[x])
			{
				data = tab[x + 1];
				tab[x + 1] = tab[x];
				tab[x] = data;
			}
		}
	}
}
