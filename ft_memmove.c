/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:58:39 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/31 17:41:10 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*str;

	ptr = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	if (dest > src)
	{
		while (n--)
		{
			ptr[n] = str[n];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[10] = "banana";
	const char	src[10] = "oraculo";

	ft_memmove(dest, src, 8);
	printf ("%s", dest);
}*/
