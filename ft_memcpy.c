/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:10:20 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 17:17:42 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	ct;

	ct = 0;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	while (ct < n)
	{
		((unsigned char *)dest)[ct] = ((unsigned char *)src)[ct];
		ct++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	c[10] = "banana";
	char	*t;

	t = "oraculo";
	ft_memcpy(c, t, 2);
	printf ("%s", c);
}*/
