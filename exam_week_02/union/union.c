/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:55:14 by aulicna           #+#    #+#             */
/*   Updated: 2023/10/18 10:41:09 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles(char *str, char c, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	int		len_s1;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!check_doubles(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		len_s1 = ft_strlen(argv[1]);
		while (argv[2][i])
		{
			if (!check_doubles(argv[1], argv[2][i], len_s1)
				&& !check_doubles(argv[2], argv[2][i], i))
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
