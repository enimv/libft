/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:09:35 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/10 23:20:32 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
int	ft_atoi(const char    *str)
{
    int i;
    int r;
    int s;
	int	a;

    i = 0;
    r = 0;
    s = 0;
	a = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n'
        || str[i] == '\r' || str[i] == '\v' )
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s++;
        i++;
		a++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - 48);
        i++;
    }
	if (s >= 2 || a >= 2)
		return (0);
    if (s == 1)
        r = r * -1;
    return (r);
}
/*
int	main()
{
	printf("%d",ft_atoi("+-157"));
}*/
