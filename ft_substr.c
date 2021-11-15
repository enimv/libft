/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:23:31 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/15 21:28:17 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	int	i;
	char	*s2 = (char	*)s;

	i = 0;
	while (i < start)
		i++;
	s2 = malloc(i * len);
	return (&s2[i]);
}

int	main()
{
	char	pi[] = "enima";
	printf("%s",ft_substr(pi,2,3));
}
