/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:12:06 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/10 04:21:09 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_exeption(int hour);

void	ft_logic(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 0 && hour < 11)
	{
		printf("%d", hour);
		printf("%s", ".00 A.M. AND ");
		printf("%d", hour++);
		printf("%s", ".00 A.M.\n");
	}
	else if (hour > 11 && hour < 23)
	{
		printf("%d", hour - 12);
		printf("%s", ".00 P.M. AND ");
		printf("%d", hour - 11);
		printf("%s", ".00 P.M.\n");
	}
	ft_exeption(hour);
}

int		ft_exeption(int hour)
{
	if (hour == 11)
		printf("%s", "11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("%s", "12.00 A.M AND 1.00 P.M.\n");
	else if (hour == 23)
		printf("%s", "11.00 P.M AND 12.00 A.M.\n");
	else if (hour == 0)
		printf("%s", "12.00 A.M AND 1.00 A.M.\n");
	return (0);
}

void	ft_takes_place(int hour)
{
	ft_logic(hour);
}
