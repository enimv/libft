/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:03:37 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/01 05:15:12 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t	count, size_t	size)
{
	char *p;
	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero(p, (count * size));
	return (p);
}

/*int	main()
{
	int	i;
	int j = 0;
	i = 9;
	char *gt;
	gt = "abcdefsopm";
	gt = ft_calloc(2,sizeof(char));
	//gt = calloc(2,1);
	while (11 > j)
	{
		printf("%d",gt[j]);
		j++;
	}
	gt[i] = "dearenima";
	while (i > 0)
	{
		printf("%d",gt[i]);
		i++;
	}
	

}*/
