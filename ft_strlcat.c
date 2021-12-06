/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 02:58:50 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/30 05:23:52 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dest_len)
		return (src_len + dstsize);
	while (src[i] && i < dstsize - dest_len - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (src_len + dest_len);
}

/*#include <stdio.h>
#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	t;

	i = 0;
	t = 0;
	while (dst[i] != 0)
	{
		i++;
	}
	if (src[t] == 0)
		return (i);
	while (src[t] != 0 && t > dstsize)
	{
		dst[i] =  src[t];
		t++;
		i++;
	}
	dst[i] = 0;
	return (i);
}

nt main()
{
	//char ft[] = "deaar";
	//char yt[] = "enima";
	printf("%lu",strlcat(NULL, "amine", 0));
	//printf("%lu",strlcat(yt, ft, 5));
}*/

