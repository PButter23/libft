/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:52:09 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 18:43:41 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ct;
	size_t	c;

	c = 0;
	ct = 0;
	while (src[ct] != '\0')
	{
		ct++;
	}
	if (size == 0)
	{
		return (ct);
	}
	while (c < size - 1 && src[c] != '\0')
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (ct);
}
/*
int	main()
{
	char	*dst;
	char	*src;

	dst = "oraculo";
	src = "banana";
	printf ("%zu", ft_strlcpy(dst, src, 0));
}*/
