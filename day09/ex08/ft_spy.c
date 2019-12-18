/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:14:49 by hrhirha           #+#    #+#             */
/*   Updated: 2019/08/30 12:50:04 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("argv[%d] : %s\n", i, argv[i]);
		if (argv[i] == &("attack"))
		{
			printf("Alert!!!");
		}
		i++;
	}
	return (0);
}
