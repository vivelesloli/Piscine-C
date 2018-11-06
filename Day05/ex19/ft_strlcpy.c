/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:55:32 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/08 20:48:12 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int slen;

	x = -1;
	slen = ft_strlen(src);
	while (++x < size - 1 && ++x < slen)
		dest[x] = src[x];
	dest[x] = '\0';
	return (slen);
}
