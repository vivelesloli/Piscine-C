/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 05:26:42 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/19 14:28:35 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] = str[0] - 32;
		if ((str[i] == '-' || str[i] == '+' || str[i] == ' ')
				&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		else if (((str[i] >= 'A' && str[i] <= 'Z' && i != 0)
					&& (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				|| ((str[i] >= 'A' && str[i] <= 'Z' && i != 0)
					&& (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
