/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:22:56 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/20 02:29:09 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(char const	*s, unsigned int	start, size_t	len);
size_t  ft_strlen(const char    *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

int ft_ischarset(char c, char *set)
{
	int i;
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int ft_get_start(char *s1, char *set)
{
	unsigned int i;
	i = 0;
	while (ft_ischarset(s1[i],set) && s1[i])
		i++;
	return (i);
}

size_t ft_get_last(char *s1, char *set)
{
	size_t i;
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (!ft_ischarset(s1[i],set))
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char	*s1, char	*set)
{
	char *str = ft_substr(s1,ft_get_start(s1,set),ft_get_last(s1,set)/* - 1*/);
	return (str);
}
int	main()
{
    char tr[] = "////////////////////test////////////////";
    char ft[] = "//*//";
    printf("%s",ft_strtrim(tr,ft));
}
