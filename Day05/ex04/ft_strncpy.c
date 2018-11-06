/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 07:00:03 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/08 20:49:58 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = -1;
	while (src[++i] && ++i < n)
		dest[i] = src[i];
	while (++i < n)
		dest[i] = '\0';
	return (dest);
}
