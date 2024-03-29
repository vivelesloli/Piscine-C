/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:52:46 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/06 07:13:41 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = -1;
	if (str[++i] == '\0')
		return (1);
	while (str[++i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	}
	return (1);
}
