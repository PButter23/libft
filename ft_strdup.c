/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:24:29 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/31 18:58:45 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		c;
	int		a;

	a = 0;
	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	ptr = (char *)malloc((c + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[a] != '\0')
	{
		ptr[a] = s[a];
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	const char	*s;

	s = "banana";
	printf ("%s", s);
}*/
