/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:20:36 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/02 11:42:37 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	size_t	i;
	char *s2;

	i  = 0;
	if (!s)
		return (NULL);
	if (start >= (ft_strlen(s)) || len == 0)
		return(ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	s2 = malloc((len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}

*/

/*int	main()
{
	char	gt [] = "x   xxxtripouille   xxx";
	printf("%s",ft_substr(gt,7,16));
}*/
