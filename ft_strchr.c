/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:08:39 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/12 21:55:16 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char	*s, int	c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == 0)
			return (0);
		i++;
	}
	return ((char	*)&s[i]);
}

int	main()
{
	char	fr[] = "dearenima";
	char	hy = 'e';
	printf("%s\n",ft_strchr(fr,hy));
	//printf("%s\n",strchr(fr,hy));
}
