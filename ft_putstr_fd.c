/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:36:23 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/31 19:00:25 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	ct;

	ct = 0;
	while (s[ct] != '\0')
	{
		write (fd, &s[ct], 1);
		ct++;
	}
}
/*
int	main(void)
{
	char	*s;
	int	fd;

	s = "banana";
	fd = 1;
	ft_putstr_fd(*s, fd);
	return (0);
}*/
