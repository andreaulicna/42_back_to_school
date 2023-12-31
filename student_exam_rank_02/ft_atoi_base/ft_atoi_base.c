/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:50:52 by aulicna           #+#    #+#             */
/*   Updated: 2023/10/19 13:05:40 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lowcase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

int	find_index(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] == to_lowcase(c))
			return (i);
		i++;
	}
	return (-5);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] && find_index(str[i]) != -5)
		i++;
	return (i);
}

int	ft_power(int str_base, int str_len)
{
	int	i;
	int	res;

	i = str_len;
	res = 1;
	while (i > 0)
	{
		res *= str_base;
		i--;
	}
	return (res);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	min;
	int	res;
	int	str_len;

	i = 0;
	min = 0;
	str_len = ft_strlen(str) - 1;
	if (str[i] == '-')
	{
		min = 1;
		i += 1;
		str_len -= 1;
	}
	res = 0;
	while (str[i + 1] && find_index(str[i + 1]) != -5)
	{
		res += find_index(to_lowcase(str[i])) * ft_power(str_base, str_len);
		i++;
		str_len--;
	}
	res += find_index(to_lowcase(str[i]));
	if (min)
		res *= -1;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("2a", 16));
// 	printf("%d\n", ft_atoi_base("-2a", 16));
// 	printf("%d\n", ft_atoi_base("2A", 16));
// 	printf("%d\n", ft_atoi_base("-2A", 16));
// 	printf("%d\n", ft_atoi_base("-13268!", 10));
// 	return (0);
// }