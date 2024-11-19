/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:29:18 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/05 17:29:20 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_upcase(unsigned int ct, char c)
{
	(void)ct;
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		ct;
	char	*nw;

	ct = 0;
	while (s[ct] != '\0')
		ct++;
	nw = (char *)malloc((ct + 1) * (sizeof(char)));
	if (nw == NULL)
		return (NULL);
	ct = 0;
	while (s[ct] != '\0')
	{
		nw[ct] = f(ct, s[ct]);
		ct++;
	}
	nw[ct] = '\0';
	return (nw);
}
// int main(void)
// {
//     char    *s;

//     s = "bAnaAna";
//     printf ("%s", ft_strmapi(s, ft_upcase));
// }
