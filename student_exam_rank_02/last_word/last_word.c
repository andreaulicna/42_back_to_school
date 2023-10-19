/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:27:58 by aulicna           #+#    #+#             */
/*   Updated: 2023/10/19 11:48:10 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int		end;
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		end = ft_strlen(str) - 1;
		while (str[end - 1] != ' ' && end != 0)
			end--;
		while (str[end] && str[end] != ' ')
		{
			write(1, &str[end], 1);
			end++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
