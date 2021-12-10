/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:08:39 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/10 00:51:48 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char	*s, int	c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char	*)&s[i]);
}

/*char *ft_strchr(const char *s, int c)
{
    while (*s != (char)c)
        if (!*s++)
            return 0;
    return (char *)s;
}*/

/*int	main()
{
	char	fr[] = "tripouille";
	char	hy = 't';
	printf("%s\n",ft_strchr(fr,hy + 256));
	printf("%s\n",strchr(fr,hy + 256));
}*/
