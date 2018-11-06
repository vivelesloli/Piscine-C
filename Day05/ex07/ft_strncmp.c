/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 07:00:36 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/07 08:35:56 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int nb;

	nb = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			nb = (s1[i] - s2[i]);
		return (nb);
	}
	return (nb);
}
