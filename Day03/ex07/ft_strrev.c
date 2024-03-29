/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 03:40:10 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/01 04:01:43 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int count_rev;
	int size_str;
	int tmp;

	count_rev = 0;
	size_str = -1;
	while (str[++size_str])
		count_rev++;
	size_str = 0;
	while (size_str < (count_rev - 1))
	{
		tmp = str[size_str];
		str[size_str] = str[(count_rev - 1)];
		str[(count_rev - 1)] = tmp;
		count_rev--;
		size_str++;
	}
	return (str);
}
