/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:36:41 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 18:41:23 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				ct;

	ct = 0;
	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	while (ct < n)
	{
		if (c1[ct] != c2[ct])
			return (c1[ct] - c2[ct]);
		ct++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "banana";
	s2 = "banano";
	printf ("%d", ft_memcmp(s1, s2, 6));
}*/
