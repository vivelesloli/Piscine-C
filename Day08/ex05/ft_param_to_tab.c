/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 10:46:02 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/17 06:19:22 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	if (!(dest = (char*)malloc(size_param(src) * sizeof(char))))
		return (0);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

int					size_param(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par			*tab;
	int					i;

	i = -1;
	if (!(tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (++i < ac)
	{
		tab[i].size_param = size_param(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
	}
	tab[i].str = 0;
	return (tab);
}
