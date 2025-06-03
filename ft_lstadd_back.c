/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:08:11 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:35:40 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newer;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	newer = *lst;
	while (newer->next != NULL)
		newer = newer->next;
	newer->next = new;
}
/*
int main(void)
{
	t_list	node1, node2, node3;
	t_list	*lst;
	t_list	*new_node;

	node1.content = "ola";
	node1.next = &node2;
	node2.content = "adeus";
	node2.next = &node3;
	node3.content = "HelloBye";
	node3.next = NULL;
	lst = &node1;
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (1);
	new_node->content = "Hello";
	new_node->next = NULL;
	ft_lstadd_back(&lst, new_node);
	t_list	*last = ft_lstlast(lst);
	printf("%s", (char *)last->content);
	return (0);
}*/