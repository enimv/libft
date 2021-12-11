/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 21:25:08 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/11 01:55:15 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	a;

	a = n;
	i = count(n);
	str = (char *)malloc(sizeof (char) * (i + 1));
	if (!str)
		return (NULL);
	if (a < 0)
	{
		a *= -1;
	}
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i--] = ((a % 10) + 48);
		a /= 10;
	}
	if (n < 0)
	{
		str[0] = '-';
	}
	return (str);
}
