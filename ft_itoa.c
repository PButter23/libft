/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:54:16 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/04 20:51:54 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int		ct;
	long	sub;

	sub = n;
	ct = 0;
	if (sub < 0)
	{
		sub *= -1;
		ct++;
	}
	if (sub == 0)
		return (1);
	while (sub > 0)
	{
		sub /= 10;
		ct++;
	}
	return (ct);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	sub;
	int		value;

	sub = n;
	value = ft_intlen(n);
	s = (char *)malloc((value + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[value] = '\0';
	if (sub < 0)
	{
		s[0] = '-';
		sub = sub * (-1);
	}
	if (sub == 0)
		s[0] = '0';
	while (sub > 0)
	{
		s[--value] = (sub % 10) + '0';
		sub /= 10;
	}
	return (s);
}
/*
int	main(void)
{
	int	n;

	n = -347;
	printf ("%s", ft_itoa(n));
	return (0);
} */
