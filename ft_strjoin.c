/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:36:51 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/10 22:41:47 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int i;
	int	c;

	i = 0;
	c = 0;
	char	*ft;
	
	if (!s1 || !s2)
		return (NULL);
	ft = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!ft)
		return (NULL);
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

/*int	main()
{
	char	gt[] = "";
	char	la[] = "";
   printf("%s", ft_strjoin(gt, la));
}*/
