/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:22:56 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/17 23:49:30 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
size_t  ft_strlen(const char    *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
char	*start(char	*str, char	*set)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (set[b])
	{
		if (str[i] != set[b])
			{
				b++;
			}
		i++;
	} 
}
			
char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*gt;
	gt = malloc(((ft_strlen(s1) + ft_strlen(set)) + 1) * sizeof(char));
	while (s1[i] != set[b])
	{
		 


int	main()
{
    char tr[] = "//////test////";
    char ft[] = "////";
    printf("%s",ft_strtrim(tr,ft));
}
