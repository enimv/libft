/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 00:07:15 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/11 02:54:52 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*alloc;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	alloc = malloc(sizeof(char) * len + 1);
	if (!alloc)
		return (NULL);
	while (s[i])
	{
		alloc[i] = f(i, s[i]);
		i++;
	}
	alloc[i] = 0;
	return (alloc);
}
