/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:33:29 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/01 08:28:57 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		needle_len;
	size_t	i;

	i = 0;
	needle_len = 0;
	if (*haystack == 0 && *needle == 0)
		return ("");
	if (*haystack == 0 && len == 0)
		return (NULL);
	if (*needle == 0 && len == 0)
		return ((char *)haystack);
	while (needle[needle_len])
		needle_len++;
	while (haystack[i] && i + ft_strlen (needle) <= len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	fr[] = "frkouss omak";
	char	re[] = "kouss";
	printf("%s\n",ft_strnstr(fr, re, -1));
	printf("%s\n",strnstr(fr, re, -1));
}*/
