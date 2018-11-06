/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 01:35:00 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/19 21:07:37 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	else if (!*str)
		return (NULL);
	return (*to_find == *str && ft_strstr(str + 1, to_find + 1)
			== str + 1) ? str : ft_strstr(str + 1, to_find);
}
