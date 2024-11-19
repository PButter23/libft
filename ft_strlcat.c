/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:34:01 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 18:42:28 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ct;
	size_t	dstl;
	size_t	srcl;

	dstl = 0;
	srcl = 0;
	while (dst[dstl] != '\0')
		dstl++;
	while (src[srcl] != '\0')
		srcl++;
	if (size <= dstl)
		return (size + srcl);
	ct = dstl;
	while (ct < size - 1 && src[ct - dstl] != '\0')
	{
		dst[ct] = src[ct - dstl];
		ct++;
	}
	dst[ct] = '\0';
	return (dstl + srcl);
}
// int	main(void)
// {
// 	char	dest[7] = "banana";
// 	char	*src;
// 	size_t	result;

// 	src = "oraculo";
// 	result = ft_strlcat(dest, src, sizeof(dest));
// 	printf ("%zu", result);
// }
