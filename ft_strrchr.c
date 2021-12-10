/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:00:13 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/10 01:14:56 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strrchr(const char	*s, int	c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (s[i] != (unsigned char)c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return ((char	*)&s[i]);
}

