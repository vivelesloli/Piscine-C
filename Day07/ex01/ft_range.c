/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:46:22 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/23 04:40:21 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int		main()
{
	int min;
	int max;
	int i;
	int *tab;
	
	i = 0;
	min = 10;
	max = 100;
	tab = ft_range(min, max);
	printf("this is the range");
	while (tab[i])
	{
		printf("%d,",tab[i]);
		i++;
	}
	return (0);
}
