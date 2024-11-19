/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:15:26 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/04 17:37:30 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	int		ct;
	int		c;

	c = ft_strlen((char *)s1);
	ct = ft_strlen((char *)s2);
	n = (char *)malloc(ct + c + 1);
	if (n == NULL)
		return (NULL);
	ct = 0;
	c = 0;
	while (s1[ct] != '\0')
	{
		n[ct] = s1[ct];
		ct++;
	}
	while (s2[c] != '\0')
	{
		n[ct] = s2[c];
		ct++;
		c++;
	}
	n[ct] = '\0';
	return (n);
}
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "banano";
// 	s2 = "ssauro";
// 	printf ("%s", ft_strjoin(s1, s2));
// }
