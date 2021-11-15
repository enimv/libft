/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:12:41 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/14 21:16:03 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	unsigned char	*ss1 = (unsigned char	*)s1;
	unsigned char	*ss2 = (unsigned char	*)s2;
	int	i;

	i = 0;
	while ( n > i)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char	rt[] = "";
	char	gt[] = "";
	printf("%d\n",ft_memcmp(rt, gt, 1	 * sizeof	(char)));
	printf("%d\n",memcmp(rt, gt, 1 * sizeof   (char)));
}
