/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:35:15 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 17:21:31 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ct;

	ct = 0;
	while (s[ct] != '\0')
		ct++;
	if (c == '\0')
		return ((char *)&s[ct]);
	ct--;
	while (ct >= 0)
	{
		if ((unsigned char)s[ct] == (unsigned char)c)
			return ((char *)&s[ct]);
		ct--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s;

	s = "banana";
	printf ("%d", ft_strrchr(s, 't'));
}*/