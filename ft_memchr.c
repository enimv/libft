/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:28:56 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/09 22:56:54 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	size_t	i = 0;
	unsigned char 	 *d = (unsigned char *)s;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
			return ((void *)&d[i]);
		else
			i++;
	}
	return (NULL);
}
