/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:46:53 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/14 01:31:59 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int cnt)
{
	unsigned int	i;
	char			*dest;
	const char		*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dest == source)
		return (dest);
	if (dest == NULL && source == NULL)
		return (NULL);
	while (i < cnt)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}