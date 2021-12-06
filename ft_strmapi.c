/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 00:07:15 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/03 22:52:54 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(const char    *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
*/
#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	len;
	char	*alloc;

	i = 0;
	len  = ft_strlen(s);
	if (s[i] == 0)
		return (ft_strdup(""));
	alloc = malloc(sizeof(char) * len + 1);
	while (s[i])
	{
		alloc[i] = f(i,s[i]);
		i++;
	}
	alloc[i] = 0;
	return (alloc);
}

/*char f(unsigned int	i, char c)
{
	return (c);
}

int	main()
{
	char	gt[] = "hello enima";
	printf("%s",ft_strmapi(gt,f));
}*/	
