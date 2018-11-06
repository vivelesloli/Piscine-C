/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 05:23:10 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/02 20:00:52 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(int nb)
{
	int i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (++i <= nb / ++i)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_prime(nb) != 1)
		nb++;
	return (nb);
}
