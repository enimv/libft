/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 23:35:57 by aoueldma          #+#    #+#             */
/*   Updated: 2021/12/03 22:55:43 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
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

/*void	f(unsigned int	i, char	*s)
{
	while (i)
	*s -= 32;  
}	

 int main()
{
	char s[] = "abcdef";
	ft_striteri(s, f);
	printf("%s", s);
}*/

