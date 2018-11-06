/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:47:48 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/15 11:32:20 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int count_rev;
	int size_str;
	int tmp;

	count_rev = 0;
	size_str = 0;
	while (str[size_str] != '\0')
	{
		size_str++;
		count_rev++;
	}
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
