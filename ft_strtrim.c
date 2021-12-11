/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:22:56 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/11 03:13:03 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_ischarset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int	ft_get_start(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	while (ft_ischarset(s1[i], set) && s1[i])
		i++;
	return (i);
}

size_t	ft_get_last(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1);
	i--;
	while (ft_ischarset(s1[i], set) && i >= 0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;
	char			*str;

	if (!s1)
		return (NULL);
	start = ft_get_start(s1, set);
	end = ft_get_last(s1, set);
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
