/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:59:18 by hrhirha           #+#    #+#             */
/*   Updated: 2019/09/08 16:34:36 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (res);
}

void	ft_putparams(int i, int j, char **argv)
{
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*sw;

	i = 1;
	while (i <= argc - 2)
	{
		j = i + 1;
		while (j <= argc - 1)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				sw = argv[i];
				argv[i] = argv[j];
				argv[j] = sw;
			}
			j++;
		}
		i++;
	}
	ft_putparams(i, j, argv);
	return (0);
}
