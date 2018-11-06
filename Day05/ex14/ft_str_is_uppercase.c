/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:11:44 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/23 05:36:48 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int compteur;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
		{
			i++;
			compteur++;
		}
	}
	if (compteur != 0)
		return(0);
	else
		return(1);
}
