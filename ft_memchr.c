/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:38:36 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 18:41:50 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		ct;
	const char	*l;

	ct = 0;
	l = (const char *)s;
	while (ct < n)
	{
		if (l[ct] == (char)c)
		{
			return ((void *)&l[ct]);
		}
		ct++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int	c;
	char	*s;
	char	*l;

	c = 'a';
	s = "banana";
	l = ft_memchr(s, c, 4);
	printf ("%s", l);
}*/
