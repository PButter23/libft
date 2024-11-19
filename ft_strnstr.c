/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:36:25 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 18:43:04 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ct;
	size_t	c;

	ct = 0;
	if (little[0] == '\0')
		return ((char *)&big[ct]);
	while (big[ct] != '\0' && ct < len)
	{
		c = 0;
		while (ct + c < len && big[ct + c] == little[c])
		{
			c++;
			if (little[c] == '\0')
				return ((char *)&big[ct]);
		}
		ct++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*big;
	char	*little;

	big = "oraculo";
	little = "acu";
	printf ("%s", ft_strnstr(big, little, 8));
}*/
