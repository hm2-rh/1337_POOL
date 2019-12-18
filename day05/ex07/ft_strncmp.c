/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:55:00 by hrhirha           #+#    #+#             */
/*   Updated: 2019/09/07 17:35:57 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_i;
	unsigned int s2_i;
	unsigned int res;

	s1_i = 0;
	s2_i = 0;
	res = 0;
	while (s1_i < n)
	{
		res = s1[s1_i] - s2[s2_i];
		if (s1[s1_i] != s2[s2_i])
			return (res);
		s1_i++;
		s2_i++;
	}
	return (0);
}
