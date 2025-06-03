/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:40:40 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:30:01 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
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
	ft_lstadd_front(&lst, new_node);
	t_list	*first = lst;
	printf("%s", (char *)first->content);
	return (0);
}*/
