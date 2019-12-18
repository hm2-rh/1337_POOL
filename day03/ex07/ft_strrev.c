/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 09:30:25 by hrhirha           #+#    #+#             */
/*   Updated: 2019/09/02 13:23:13 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char		*ft_strrev(char *str)
{
	int		ft_strlen(char *str);
	int		i;
	int		len;
	char	sw;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		sw = str[i];
		str[i] = str[len];
		str[len] = sw;
		i++;
		len--;
	}
	return (str);
}
