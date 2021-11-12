/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:00:13 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/12 22:34:47 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char	*ft_strrchr(const char	*s, int	c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	while (s[i] != c)
	{
		if (s[i] == 0)
			return (0);
		i--;
	}
	return ((char	*)&s[i]);
}

int main()
{
	char	fr[] = "dearenima";
	char	gh = 'e';
	printf("%s\n",ft_strrchr(fr, gh));
	printf("%s\n",strrchr(fr, gh));
	printf("%s\n",strchr(fr, gh));
}
