/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 02:58:50 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/12 22:15:59 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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
	while (src[t] != 0)
	{
		dst[i] =  src[t];
		t++;
		i++;
	}
	dst[i] = 0;
	return (i);
}

int main()
{
	char ft[] = "deaar";
	char yt[] = "enima";
	printf("%lu",ft_strlcat(yt, ft, 5));
	//printf("%lu",strlcat(yt, ft, 5));
}

