/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:12:55 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/10 03:24:37 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_choose_alphabet(char *str, char *min, char *max)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*min = 'a';
		*max = 'z';
		return (1);
	}
	else if (*str >= 'A' && *str <= 'Z')
	{
		*min = 'A';
		*max = 'Z';
		return (1);
	}
	return (0);
}

void	*ft_rot42(char *str)
{
	int		i;
	char	min;
	char	max;

	while (*str)
	{
		if (ft_choose_alphabet(str, &min, &max))
		{
			i = -1;
			while (++i < 16)
			{
				*str = *str + 1;
				if (*str > max)
					*str = min;
			}
		}
		str++;
	}
	return (str);
}

int main()
{
	???????????
}
