/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 07:01:43 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/07 12:14:04 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int compteur;

	compteur = 0;
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
		{
			i++;
			compteur++;
		}
	}
	if (compteur != 0)
		return (0);
	else
		return (1);
}
