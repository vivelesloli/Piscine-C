/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 05:20:49 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/06 22:18:00 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_iterative_power(int nb, int power)
{
	int	a;
	int	result;

	result = 0;
	a = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
	{
		while (++result < power)
			nb *= a;
	}
	return (nb);
}
