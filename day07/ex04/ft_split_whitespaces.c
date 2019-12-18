/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:01 by hrhirha           #+#    #+#             */
/*   Updated: 2019/09/12 12:12:43 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_words_count(char *str)
{
	 int i;
	 int cc;

	 i = 0;
	 cc = 0;
	 while (str[i] != '\0')
	 {
		 if (!ft_is_whitespace(str[i]))
		 {
			 while (!ft_is_whitespace(str[i]))
				 i++;
			 while (ft_is_whitespace(str[i]))
				 i++;
			 cc++;
		 }
		 else
			 i++;
	 } 
	 return (cc);
}

int		ft_chars_count(char *word)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (ft_is_whitespace(word[i]))
		i++;
	while (!ft_is_whitespace(word[i]))
	{
		i++;
		j++;
		if (word[i] == '\0')
			return (j);
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	char **arr;
	int a;
	int b;
	int c;

	arr = (char **)malloc((ft_words_count(str) + 1) * sizeof(char *));
	b = 0;
	while (b < ft_words_count(str))
	{
		arr[b] = 
		b++;
	}
	a = 0;
	while (str[a] != '\0')
	{
		if (!ft_is_whitespace(str[a]))
		{
			b = 0;
			c = 0;
			while (!ft_is_whitespace(str[a]))
			{
				arr[b] = 
				arr[b][c] = str[a];
				a++;
				c++;
			}
			arr[b][c++] = '\0';
			while (ft_is_whitespace(str[a]))
				a++;
			b++;
		}
		else
			a++;
	}
	return(arr);

}

int		main()
{
	char s[] = "Youu can do anything but you can't do everything";
	char **ss = ft_split_whitespaces(s);
	for (int i = 0; i < 9; i++)
	{
		printf("%s", ss[i]);
	}
}
