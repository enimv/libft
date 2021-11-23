/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:20:36 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/20 02:29:42 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	int	i;
	int	b;
	char	*s2 = (char	*)s;

	i  = 0;
	b = 0;
	s2 = malloc((len + 1) * sizeof(char));
	i = start;
	while (i <= len /* + 1*/)
	{
		s2[b] = s[i];
		i++;
		b++;
	}
	s2[b] = '\0';
	return (s2);
}
