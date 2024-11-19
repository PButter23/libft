/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:56:46 by arde-jes          #+#    #+#             */
/*   Updated: 2024/10/31 18:59:38 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	ct;

	ct = 0;
	while (s[ct] != '\0')
	{
		write (fd, &s[ct], 1);
		ct++;
	}
	write (fd, "\n", 1);
}
// int	main(void)
// {
// 	char	*s;
// 	s = "banana";
// 	ft_putendl_fd(s, 1);
// }