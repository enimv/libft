/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:46:53 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/13 20:47:26 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
void * ft_memcpy(void* dst, const void* src, unsigned int cnt)
{
	int i;
	i = 0;
    char *pszDest = (char *)dst;
    const char *pszSource =( const char*)src;
    if((pszDest!= '\0') && (pszSource!= '\0'))
    {
        while(cnt > 0) //till cnt
        {
            //Copy byte by byte
            pszDest[i] = pszSource[i];
            i++;
			cnt--;
        }
    }
    return dst;
}


int main()
{
	int	ft[] = {1, 2, 3};
	int	tr[] = {4, 5, 6};
	ft_memcpy(ft,tr,3);
	printf("%d",ft[0]);
	memcpy(ft,tr,3 * sizeof(int));
	printf("%d",ft[0]);

}

