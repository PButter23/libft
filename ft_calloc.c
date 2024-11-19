/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:02:59 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/31 17:08:45 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc (nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_bzero(str, nmemb * size);
	return (str);
}
/*
int	main(void)
{
	int	*str;
	int	i;

	str = (int *)ft_calloc(5, sizeof(int));
	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < 5)
	{
		printf ("%d", str[i]);
		i++;
	}
	free(str);
	return (0);
}*/
