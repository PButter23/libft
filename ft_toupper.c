/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:13:27 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/31 18:11:48 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c);
	}
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = 'z';
	printf ("%d", ft_toupper(c));
}*/
