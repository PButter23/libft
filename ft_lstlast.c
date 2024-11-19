/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:00:52 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:33:58 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	new = lst;
	while (new->next != NULL)
		new = new->next;
	return (new);
}
/*int	main(void)
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
	printf("%s", (char *)ft_lstlast(lst)->content);
	return (0);
}*/