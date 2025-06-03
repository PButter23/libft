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
/*
int main(void)
{
		t_list	node1, node2, node3;
	t_list	*lst;

	node1.content = "ola";
	node1.next = &node2;
	node2.content = "adeus";
	node2.next = &node3;
	node3.content = "HelloBye";
	node3.next = NULL;
	lst = &node1;
	printf ("%d", ft_lstsize(lst));
	return (0);
}*/