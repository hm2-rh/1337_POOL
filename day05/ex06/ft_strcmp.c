/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 11:49:31 by hrhirha           #+#    #+#             */
/*   Updated: 2019/09/07 11:39:47 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int s1_count;
	int s2_count;
	int res;

	s1_count = 0;
	s2_count = 0;
	res = 0;
	while (s1[s1_count])
	{
		res = s1[s1_count] - s2[s2_count];
		if (s1[s1_count] != s2[s1_count])
			return (res);
		s1_count++;
		s2_count++;
	}
	return (res);
}
