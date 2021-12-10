/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:46:53 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/10 22:40:31 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
void	*ft_memcpy(void* dst, const void* src, unsigned int cnt)
{
	unsigned int	i;
    char *dest = (char *)dst;
    const char *source =( const char*)src;
    
	i = 0;
	if (dest == source)
		return (dest);
	if (dest == NULL && source == NULL)
		return (NULL);
	while(i < cnt)
    {  
		dest[i] = source[i];
        i++;
    }
    return (dst);
}


 /*int main()
{
	char	ft[] = "";
	char	tr[] = "fgfufuyfuy";
	printf("%s\n", ft_memcpy(ft,tr,4));
	//printf("%d",ft[0]);
	printf("%s\n", memcpy(ft,tr,4));
	//printf("%d",ft[0]);

}
*/
