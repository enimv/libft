/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:21:08 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/16 17:01:12 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
size_t	ft_strlen(const char	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
int	main()
{
	int	i;

	i = 0;
	char fr[] = "hgd";
	//printf("%lu\n", strlen(&fr[i]));
	printf("%lu\n", ft_strlen(&fr[i]));
	printf("%d\n",i);
}
