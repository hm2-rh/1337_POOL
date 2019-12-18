/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 22:27:49 by hrhirha           #+#    #+#             */
/*   Updated: 2019/09/12 18:10:28 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_rot42(char *str)
{
	int i;
	int len;
	int sum;

	i = -1;
	len = ft_strlen(str) - 1;
	while (++i <= len && ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122)))
	{
		sum = 0;
		while (++sum <= 42)
		{
			if (str[i] != 122 && str[i] != 90)
				str[i] += 1;
			else if (str[i] == 122)
			{
				str[i] = 96;
				str[i] += 1;
			}
			else
			{
				str[i] = 64;
				str[i] += 1;
			}
		}
	}
	return (str);
}

int	main(void)
{
	char s[] = "aAnNzZ";

	printf("%s\n", ft_rot42(s));
	return (0);
}
