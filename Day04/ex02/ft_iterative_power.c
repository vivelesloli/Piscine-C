/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 01:03:15 by mcharret          #+#    #+#             */
/*   Updated: 2017/08/10 04:54:25 by mcharret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_iterative_power(int nb, int power)
{
	int	s;
	int	result;

	result = 1;
	s = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		while (result < power)
		{
			result++;
			nb *= s;
		}
	}
	return (nb);
}
