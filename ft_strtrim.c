/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:22:56 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/16 19:07:48 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
size_t  ft_strlen(const char    *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*gt;
	int	i;
	int	a;
	int	c;

	a = 0;
	c = 0;
	i = 0;
	gt = malloc(((ft_strlen(s1) + ft_strlen(set)) + 1) * sizeof(char));
	while (s1[i] != 0 || set[a] != 0)
	{
		if (set [a] != s1[i])			
		{
			gt[c] = s1[i];
			c++;
			i++;
		}
		else
			i++;
		a++;
	}
	gt[c] = '\0';
	return (gt);
}

int	main()
{
	char tr[] = "deeareniimat";
	char ft[] = "eit";
	printf("%s",ft_strtrim(tr,ft));
}
