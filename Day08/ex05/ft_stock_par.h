/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 11:22:29 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/17 05:57:38 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <unistd.h>
# include <stdlib.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

int					size_param(char *str);
char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_putchar(char c);
#endif
