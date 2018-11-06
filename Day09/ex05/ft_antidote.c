/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 09:13:12 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/10 03:04:53 by matcharr         ###   ########.fr       */
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
