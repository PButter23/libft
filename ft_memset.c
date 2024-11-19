/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:47:55 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/30 17:18:15 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	ct;
	char	*ptr;

	ptr = s;
	ct = 0;
	while (ct < n)
	{
		ptr[ct] = c;
		ct++;
	}
	return (s);
}
/*
int	main()
{
	char	c[10];

	ft_memset(c, 't', 10);
	printf ("%s", c);
}*/
