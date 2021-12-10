/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:25:08 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/08 18:16:56 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
int count(int n)
{
    int len;

    len = 0;
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    if (n == 0)
        return(1);
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int  n)
{
    int i;
    char    *str;
    int a;

    a = n;
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}

    i = count(n);
    str = (char *)malloc(sizeof (char) * (i + 1));
    if (!str)
        return (NULL);
    if (n < 0)
    {
        n *= -1;
    }
    str[i] = '\0';
    i--;
    while (i >= 0)
    {
        str[i] = ((n % 10) + 48);
        i--;
        n /= 10;
    }
      if (a < 0)
    {
       str[0] = '-';
    }
return (str);
}
/*
int main()
{
	printf("%s\n",ft_itoa(-2147483648));
}*/
