/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 02:45:25 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/17 09:06:34 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int a;

	i = -1;
	a = min - 1;
	if (++a >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(int) * (max - ++a));
	if (tab == 0)
		return (0);
	while (++a < max)
		tab[++i] = a;
	return (tab);
}
