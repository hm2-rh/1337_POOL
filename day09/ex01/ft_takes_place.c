/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:42:52 by hrhirha           #+#    #+#             */
/*   Updated: 2019/08/30 11:03:12 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_help(int hour)
{
	char am;
	char pm;
	int hour1;

	am = 'A';
	pm = 'P';
	hour1 = hour + 1;
	if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. ", hour, am);
		printf("AND %d.00 %c.M\n", hour1, pm);
	}
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M ", hour, pm);
		printf("AND %d.00 %c.M.\n", hour1 - 12, pm);
	}
	if (hour == 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. ", hour - 12, pm);
		printf("AND %d.00 %c.M\n", hour1 - 12, am);
	}
}

void	ft_takes_place(int hour)
{
	char am;
	char pm;
	int hour1;

	am = 'A';
	pm = 'P';
	hour1 = hour + 1;
	ft_help(hour);
	if (hour == 0)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. ", hour + 12, am);
		printf("AND %d.00 %c.M.\n", hour1, am);
	}
	if (hour > 0 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. ", hour, am);
		printf("AND %d.00 %c.M.\n", hour1, am);
	}
	if (hour > 12 && hour < 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. ", hour - 12, pm);
		printf("AND %d.00 %c.M.\n", hour1 - 12, pm);
	}
}

int	main()
{
	ft_takes_place(12);
	return 0;
}
