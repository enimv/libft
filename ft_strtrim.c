/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:22:56 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/02 01:33:57 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int ft_ischarset(char const c, char const *set)
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

unsigned int ft_get_start(char const *s1, char const *set)
{
	unsigned int i;
	i = 0;
	while (ft_ischarset(s1[i],set) && s1[i])
		i++;
	return (i);
}

size_t ft_get_last(char const *s1, char const *set)
{
	size_t i;
	i = ft_strlen(s1) - 1;
	/*while (s1[i])
		i++;
	i--;
	while (i >= 0 && ft_ischarset(s1[i],set) == 1)
        i--;*/
	/*while (i >= 0)
	{
		if(!ft_ischarset(s1[i],set))
			return(i);
		i--;
	}*/
	while (ft_ischarset(s1[i],set) && i >= 0)
        i--;
	return (i);
} 

char *ft_strtrim(char const *s1, char const *set)
{
	unsigned int start = ft_get_start(s1, set);
	size_t end = ft_get_last(s1, set);
	char	*str = ft_substr(s1, start, end - start + 1);
	return (str);
}

// int	main()
// {
//     char tr[] = "          ";
//    // char ft[] = " x";
//    printf("%s\n",ft_strtrim(tr," "));
//    //printf("%d\n",ft_get_start(tr, ft));
//    //printf("%zu\n",ft_get_last(tr, ft));
// 	//printf("%zu\n",ft_strlen(tr));
// }

