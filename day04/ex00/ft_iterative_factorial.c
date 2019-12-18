/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:28:44 by hrhirha           #+#    #+#             */
/*   Updated: 2019/09/04 19:58:51 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;
	int m;

	res = nb;
	m = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		res = 1;
	else if (nb > 1)
	{
		while (m < nb)
		{
			res *= nb - m;
			m++;
		}
	}
	else
		return (0);
	return (res);
}
