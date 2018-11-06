/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:00:13 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/11 15:01:32 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_choose_alphabet(char *str, char *min, char *max)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*min = 'a';
		*max = 'z';
		return (1);
	}
	if (*str >= 'A' && *str <= 'Z')
	{
		*min = 'A';
		*max = 'Z';
		return (1);
	}
	return (0);
}

void	*ft_rot42(char *str)
{
	int		i;
	char	min;
	char	max;

	while (*str != '\0')
	{
		if (ft_choose_alphabet(str, &min, &max))
		{
			i = 0;
			while (i < 16)
			{
				*str = *str + 1;
				if (*str > max)
					*str = min;
				i++;
			}
		}
		str++;
	}
	return (str);
}
