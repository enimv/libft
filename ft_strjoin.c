/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:36:51 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/11 02:45:39 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int		i;
	int		c;
	char	*ft;

	i = 0;
	c = 0;
	if (!s1 || !s2)
		return (NULL);
	ft = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!ft)
		return (NULL);
	while (s1[i] != '\0')
	{
		ft[c++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ft[c++] = s2[i++];
	}
	ft[c] = '\0';
	return (ft);
}
