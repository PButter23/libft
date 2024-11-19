/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:23:58 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/07 16:52:22 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ct;
	size_t	lens;
	char	*n;

	lens = 0;
	lens = ft_strlen((char *)s);
	if (start >= lens)
	{
		n = (char *)malloc(1);
		n[0] = '\0';
		return (n);
	}
	ct = 0;
	if (len > lens - start)
		len = lens - start;
	n = (char *)malloc ((len + 1) * sizeof(char));
	if (n == NULL)
		return (NULL);
	while (ct < len)
	{
		n[ct] = s[ct + start];
		ct++;
	}
	n[ct] = '\0';
	return (n);
}
/*
int	main(void)
{
	char	*s;
	char	*d;

	s = "bananossauro";
	d = ft_substr(s, 3, 8);
	printf ("%s", d);
}*/
