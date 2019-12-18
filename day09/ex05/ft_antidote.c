/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:15:57 by hrhirha           #+#    #+#             */
/*   Updated: 2019/08/30 15:58:13 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	int m_num;

	if (i <= j && i <= k)
	{
		if (j < k)
			m_num = j;
		else
			m_num = k;
	}
	else if (j <= i && j <= k)
	{
		if (i < k)
			m_num = i;
		else
			m_num = k;
	}
	else if (k <= i && k <= j)
	{
		if (i < j)
			m_num = i;
		else
			m_num = j;
	}
	return (m_num);
}
