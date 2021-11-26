/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:20:36 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/26 02:14:13 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	int	i;
	int	b;
	int	c;
	char	*s2 = (char	*)s;

	i  = 0;
	b = 0;
	c = 0;
	s2 = malloc((len + 1) * sizeof(char));
	i = start;
	while (c <= len)
	{
		s2[b] = s[i];
		i++;
		b++;
		c++;
	}
	s2[b] = '\0';
	return (s2);
}

int	main()
{
	char	gt [] = "hello dear enima";
	printf("%s",ft_substr(gt,6,10));
}
