/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:24:07 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/10 22:17:32 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memset(void *b, int	c, size_t	len)
{
	unsigned char	*d;
	size_t				i;

	d = b;
	i = 0;
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	return (b);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char k[] ="";
	printf("%s\n\n",ft_memset(k,'c',4));
	printf("%s",memset(k,'c',4));
}*/
