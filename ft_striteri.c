/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:04:54 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/05 17:12:16 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_upcase(unsigned int ct, char *c)
// {
// 	(void)ct;
// 	write (1, c, 1);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ct;

	ct = 0;
	while (s[ct] != '\0')
	{
		(*f)(ct, &s[ct]);
		ct++;
	}
}
// int	main(void)
// {
// 	char	*s;
//
// 	s = "BanNNAAaana";
// 	ft_striteri(s, ft_upcase);
// }