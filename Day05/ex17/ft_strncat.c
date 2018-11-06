/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 06:28:41 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/07 07:02:40 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int len;
	int i;

	len = 0;
	i = -1;
	while (dest[len])
		len++;
	while (src[++i] && ++i < nb)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
