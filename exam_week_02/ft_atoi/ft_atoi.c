/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 08:25:36 by aulicna           #+#    #+#             */
/*   Updated: 2023/10/18 09:51:54 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnum(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0); 
}

int	ft_atoi(const char *str)
{
	int	i;
	int	min;
	int	res;

	i = 0;
	min = 0;
	if (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
			min = 1;
		i++;
	}
	res = 0;
	while (str[i] && ft_isnum(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	if (min)
		res *= -1;
	return (res);
}
