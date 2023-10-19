/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:17:26 by aulicna           #+#    #+#             */
/*   Updated: 2023/10/19 11:23:39 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	*str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i])
		{
			if (('A' <= str[i] && str[i] <= 'M')
				|| ('a' <= str[i] && str[i] <= 'm'))
				str[i] += 13; 
			else if (('N' <= str[i] && str[i] <= 'Z')
				|| ('n' <= str[i] && str[i] <= 'z'))
				str[i] -= 13; 
			write(1, &str[i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
