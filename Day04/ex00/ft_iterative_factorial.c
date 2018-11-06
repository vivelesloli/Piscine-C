/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 05:19:10 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/02 10:26:17 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;

	n = nb;
	if (n < 0 || n > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		n = (nb + 1)
		while (--n > 1)
			nb *= (n - 1);
	}
	return (nb);
}
