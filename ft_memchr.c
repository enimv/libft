/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:28:56 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/14 03:40:49 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	int	i = 0;
	char *d = (char *)s;
	while (i < n)
	{
		if (d[i] == c)
			return (&d[i]);
		else
			i++;
	}
	return (0);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

  // ret = memchr(str, ch, strlen(str));
	ret = ft_memchr(str, ch, strlen(str));
   printf("String after %c /// is  %s\n", ch, ret);
   return(0);
}
