/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:21:08 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/10 20:28:11 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
size_t	strlen(const char	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
int	main()
{
	char fr[] = "hgd";
	printf("%lu",strlen(fr));
}
