/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:57:05 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/11 19:37:15 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t		i;

	i = 0;
	dstsize--;
	while ( dstsize > i)
	{
		dst[i] == src[i];
		i++;
		dstsize--;
	}
	dstsize[i] = '\0';
	return (i);
}	
