/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:33:51 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/31 17:08:36 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	ct;

	ptr = (char *)s;
	ct = 0;
	while (ct < n)
	{
		ptr[ct] = '\0';
		ct++;
	}
}
/*int	main(void)
{
	char	*str;

	str = "banana";
	printf ("%s", ft_bzero(str, 5));
}*/
