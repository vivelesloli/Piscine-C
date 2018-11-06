/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:53:46 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/11 14:53:52 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (j > i)
	{
		if (j < k)
			return (j);
		else
		{
			if (k > i)
				return (k);
			else
				return (i);
		}
	}
	else
	{
		if (j > k)
			return (j);
		else
		{
			if (k < i)
				return (k);
			else
				return (i);
		}
	}
}
