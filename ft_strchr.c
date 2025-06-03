/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:20:54 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 17:18:40 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	ct;

	ct = 0;
	while (s[ct] != '\0')
	{
		if (s[ct] == (char)c)
		{
			return ((char *)&s[ct]);
		}
		ct++;
	}
	if ((char)c == '\0')
		return ((char *)&s[ct]);
	return (NULL);
}
/*
int	main(void)
{
	char	*s;
	char	c;

	c = 'a';
	s = "lamanhana";
	printf ("%s",ft_strchr(s, c));
}*/
