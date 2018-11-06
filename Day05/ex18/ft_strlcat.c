/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:55:03 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/08 20:56:10 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int a;
	unsigned int v;

	v = ft_strlen(src);
	a = -1;
	while (*dest && ++a < size)
		dest++;
	if (i == size)
		return (i + v);
	while (*src)
	{
		if (++a < size - 1)
			*(dest++) = *src;
		src++;
	}
	*dest = '\0';
	return (i + v + 1);
}
