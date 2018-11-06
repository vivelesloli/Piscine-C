/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 03:02:54 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/17 10:06:24 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			my_argvlen(int argc, char **argv, int x, int len)
{
	int y;

	while (++x < argc)
	{
		y = -1;
		while (argv[x][++y])
			len++;
		len++;
	}
	return (len);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		x;
	int		y;
	int		len;
	char	*str;

	if (argc < 2)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = malloc(my_argvlen(argc, argv, 0, 0) * sizeof(char));
	x = 0;
	len = 0;
	while (++x < argc)
	{
		y = -1;
		while (argv[x][++y])
			str[len + y] = argv[x][y];
		len = len + y;
		str[len++] = '\n';
	}
	str[len - 1] = '\0';
	return (str);
}
