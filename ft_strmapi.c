/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 00:07:15 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/10 22:51:00 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	len;
	char	*alloc;

	i = 0;
	if (!s)
		return (NULL);
	len  = ft_strlen(s);
	alloc = malloc(sizeof(char) * len + 1);
	if (!alloc)
		return (NULL);
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
char yu[] = ""
int	main()
{
	char	gt[] = "hello enima";
	printf("%s",ft_strmapi(gt,f));
}*/	
