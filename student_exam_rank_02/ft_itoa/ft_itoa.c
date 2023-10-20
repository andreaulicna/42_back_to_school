/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:44:19 by aulicna           #+#    #+#             */
/*   Updated: 2023/10/20 17:30:20 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_nbrlen(int nbr)
{
    int len;

    len = 0;
    if (nbr < 0)
        len++;
    while (nbr != 0)
    {
        nbr /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int nbr)
{
    int     len;
    char    *s;

    len = ft_nbrlen(nbr);
    s = (char *) malloc(sizeof(char) * (len + 1));
    if (!s)
        return (NULL);
    s[len] = '\0';
    if (nbr == 0)
        s[0] = '0';
    else if (nbr < 0)
        s[0] = '-';
    len -= 1;
    while (nbr != 0)
    {
        if (nbr > 0)
			s[len] = nbr % 10 + '0';
		else
			s[len] = (nbr % 10) * (-1) + '0';
		len--;
		nbr /= 10;
	}
    return (s);
}

//int main(void)
//{
//    printf("%s\n", ft_itoa(-4542));
//    return (0);
//}