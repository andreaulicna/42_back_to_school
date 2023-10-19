/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:04:00 by aulicna           #+#    #+#             */
/*   Updated: 2023/10/19 10:52:44 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_contain_char(char *str, char c, int *j)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			*j += i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *s)
{
	int	 i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && check_contain_char(&s2[j], s1[i], &j))
	{
		i++;
		j++;
	}
	if (i == ft_strlen(s1))
		ft_putstr(s1);
}

//int	main(int argc, char **argv)
//{
//	if (argc == 3)
//		wdmatch(argv[1], argv[2]);
//	write(1, "\n", 1);
//	return (0);
//}
