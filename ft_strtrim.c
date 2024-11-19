/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:37:53 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/04 17:53:23 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ct;
	int		cti;
	int		ctf;
	char	*nw;

	if (set == NULL || s1 == NULL)
		return (NULL);
	ctf = ft_strlen((char *)s1) - 1;
	cti = 0;
	while (s1[cti] && ft_strchr(set, s1[cti]))
		cti++;
	while (ctf > cti && ft_strrchr(set, s1[ctf]))
		ctf--;
	ct = 0;
	nw = (char *)malloc((ctf - cti + 2) * (sizeof(char)));
	if (nw == NULL)
		return (NULL);
	while (cti <= ctf)
	{
		nw[ct] = s1[cti];
		ct++;
		cti++;
	}
	nw[ct] = '\0';
	return (nw);
}
// int	main(void)
// {
// 	char	*s1;
// 	char	*set;

// 	s1 = "bananossabarba";
// 	set = "ba";
// 	printf ("%s", ft_strtrim(s1, set));
// }
