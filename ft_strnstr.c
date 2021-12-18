/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:33:29 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/11 03:00:42 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		needle_len;
	size_t	i;

	i = 0;
	needle_len = 0;
	if (haystack == NULL && len == 0 && needle != NULL)
		return (NULL);
	if (*haystack == 0 && *needle == 0)
		return ("");
	if (*needle == 0 && len == 0)
		return ((char *)haystack);
	while (needle[needle_len])
		needle_len++;
	while (haystack[i] && i + ft_strlen (needle) <= len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
