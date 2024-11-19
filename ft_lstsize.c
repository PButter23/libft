/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:43:14 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:33:19 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		ct;
	t_list	*new;

	ct = 0;
	new = lst;
	while (new != NULL)
	{
		new = new->next;
		ct++;
	}
	return (ct);
}
// int main(void)
// {
// }
