/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:33:29 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/12 23:30:47 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
     int  i;
     int  b;

     b = 0;
     i = 0;
     while (i < len)
     {
          while (needle[b] == haystack[i] && haystack[i])
          {
               i++;
               b++;
          }
          if (needle[b] == '\0')
			  i = i - b;
               return((char	*)&haystack[i]);
          b = 0;
          i++;
     }
	 return (0);
}

int	main()
{
	char	fr[] = "dearenima";
	char	re[] = "en";
	printf("%s\n",ft_strnstr(fr, re, 10));
	printf("%s\n",strnstr(fr, re, 10));
}

