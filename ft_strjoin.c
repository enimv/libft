/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:36:51 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/16 18:22:19 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
size_t  ft_strlen(const char   *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int i;
	int	c;

	i = 0;
	c = 0;
	char	*ft;
	
	if (s1[i] == 0 || s2[c] == 0)
		return (0);
	ft = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	while (s1[i] != '\0')
	{
		ft[c] = s1[i];
		i++;
		c++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ft[c] = s2[i];
		c++;
		i++;
	}

	ft[c] = '\0';
	return (ft);
}

int	main()
{
	char	gt[] = "";
	char	la[] = "";
   printf("%s", ft_strjoin(gt, la));
}
