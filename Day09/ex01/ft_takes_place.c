/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:46:14 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/10 21:41:12 by mcharret         ###   ########.fr       */
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
	if (hour > 11 && hour < 23)
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
	{
		printf("%s", "11.00 A.M. AND 12.00 P.M.\n");
	}
	if (hour == 12)
	{
		printf("%s", "12.00 A.M AND 1.00 P.M.\n");
	}
	if (hour == 23)
	{
		printf("%s", "11.00 P.M AND 12.00 A.M.\n");
	}
	if (hour == 0)
	{
		printf("%s", "12.00 A.M AND 1.00 A.M.\n");
	}
	return (0);
}

void	ft_takes_place(int hour)
{
	ft_logic(hour);
}

int		main(void)
{
	ft_takes_place(0);
	return (0);
}
