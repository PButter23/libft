/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:45:03 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:35:02 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_del_content(void *content)
{
	(void)content;
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/*int	main(void)
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));
	t_list	*lst;

	if(node1 == NULL || node2 == NULL || node3 == NULL)
	{
		free(node1);
		free(node2);
		free(node3);
		return (1);
	}
	node1->content = "ola";
	node1->next = node2;
	node2->content = "adeus";
	node2->next = node3;
	node3->content = "HelloBye";
	node3->next = NULL;
	lst = node1;
	ft_lstclear(&lst, ft_del_content);
	if (lst == NULL)
		printf ("lista limpa com sucesso!\n");
	else
		printf ("Erro ao limpar a lista.\n");
	return (0);
}*/