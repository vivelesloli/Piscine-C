/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 01:46:38 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/22 09:23:07 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int str_cursor;
	int to_find_cursor;
	int to_find_size;

	str_cursor = 0;
	to_find_size = 0;
	while (to_find[to_find_size])
		to_find_size++;
	if (to_find_size == 0)
		return (str);
	while (str[str_cursor])
	{
		to_find_cursor = 0;
		while (str[str_cursor + to_find_cursor] == to_find[to_find_cursor])
		{
			if (to_find_cursor == to_find_size - 1)
				return (str + str_cursor);
			to_find_cursor++;
		}
		str_cursor++;
	}
	return (0);
}
