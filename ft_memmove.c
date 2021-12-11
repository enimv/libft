/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 00:12:00 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/11 02:27:04 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sorc;

	dest = (char *)dst;
	sorc = (const char *)src;
	if (dest > sorc)
	{
		while (len)
		{
			dest[len - 1] = sorc[len - 1];
			len--;
		}
		return (dest);
	}
	else
		return (ft_memcpy(dst, src, len));
}
