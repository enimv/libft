/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:28:56 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/30 00:00:45 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	size_t	i = 0;
	char 	 *d = (char *)s;
	while (i < n)
	{
		if (d[i] == c)
			return ((void *)&d[i]);
		else
			i++;
	}
	return (0);
}

/*int main () {
   int	 st[] = {65,66,67,68};
   int	 gt  = 2;
   int *ret;
   int	i;
   char *p;
	i = 0;
	while (i < 4)
	{
	   p[i] = itoa(st[i]);
	   i++;
	}
	printf("%s",p);
//   ret = memchr(st,gt,sizeof(int) * 4);
   
  // while(++i < 4)
   //{
//	   printf("%d\n",ret[i]);
 //  }
	return(0);
}*/
