/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:24:07 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/29 23:52:03 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
void	*ft_memset(void *b, int	c, size_t	len)
{
	unsigned char *d;
	d = (unsigned char *)b;
	while (d != '\0' && len > 0)
	{
		*d = c;
		d++;
		len--;
	}
	return (d);
}

/* int	main()
{
*/
