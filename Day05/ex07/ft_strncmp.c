/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:44:17 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/19 11:37:28 by mcharret         ###   ########.fr       */
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
