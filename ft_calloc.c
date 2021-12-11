/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:03:37 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/11 00:49:35 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	char	*p;

	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero(p, (count * size));
	return (p);
}
