/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:35:57 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/26 00:09:58 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int	i;

	i = 0;
	if (s[i] == 0)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	f(unsigned int	i, char	*s)
{
	*s -= 32;  
}	

int main()
{
	char s[] = "abcdef";
	ft_striteri(s, f);
	printf("%s", s);
}
