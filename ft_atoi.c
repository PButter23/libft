/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:59:04 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 17:13:53 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	ct;
	int	num;
	int	sinal;

	ct = 0;
	num = 0;
	sinal = 1;
	while (nptr[ct] == ' ' || (nptr[ct] >= '\t' && nptr[ct] <= '\r'))
		ct++;
	if (nptr[ct] == '-' || nptr[ct] == '+')
	{
		if (nptr[ct] == '-')
		{
			sinal = sinal * (-1);
		}
		ct++;
	}
	while (nptr[ct] >= '0' && nptr[ct] <= '9')
	{
		num = num * 10 + (nptr[ct] - '0');
		ct++;
	}
	return (num * sinal);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf ("%d", ft_atoi(argv[1]));
}*/
