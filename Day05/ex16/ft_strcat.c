/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 06:28:19 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/08 20:34:36 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	i = -1;
	while (src[++i])
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
