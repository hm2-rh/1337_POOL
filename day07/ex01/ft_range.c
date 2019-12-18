/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:33:46 by hrhirha           #+#    #+#             */
/*   Updated: 2019/09/11 17:06:58 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int i;

	if (min >= max)
		return NULL;
	res = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

int		main()
{
	int *t;
	int i;

	t = ft_range(6, 23);
	i = 0;
	while (i < 23 - 6)
	{
		printf("%i ",t[i]);
		i++;
	}
	return 0;
}
