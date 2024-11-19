/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:39:40 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 17:20:51 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ct;

	ct = 0;
	while (s1[ct] != '\0' && s2[ct] != '\0' && ct < n && s1[ct] == s2[ct])
	{
		ct++;
	}
	if (ct == n)
		return (0);
	return ((unsigned char)s1[ct] - (unsigned char)s2[ct]);
}
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "banana";
// 	s2 = "bonana";
// 	printf ("%d", ft_strncmp(s1, s2, 4));
// }
