/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:03:33 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:32:42 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void *ft_strdup1(void *content)
{
    return ft_strdup((char *)content);
}

void	ft_uppercase(void *content)
{
	char	*str = (char *)content;
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void	ft_del(void *content)
{
	free(content);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*newlst;

	tmp = lst;
	newlst = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		new = ft_lstnew(f(tmp->content));
		if (new == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new);
		tmp = tmp->next;
	}
	return (newlst);
}
/*int	main(void)
{
	t_list	node1, node2, node3;
	t_list	*lst;
	t_list	*new_lst;

	node1.content = ft_strdup("ola");
	node1.next = &node2;
	node2.content = ft_strdup("adeus");
	node2.next = &node3;
	node3.content = ft_strdup("HelloBye");
	node3.next = NULL;
	lst = &node1;
	new_lst = ft_lstmap(lst, ft_strdup1, ft_del);
	if (new_lst == NULL)
	{
		printf("Erro ao criar nova lista.\n");
		return (1);
	}
	ft_lstiter(new_lst, ft_uppercase);
	printf("Lista original:\n");
	printf("%s\n", (char *)node1.content);
	printf("%s\n", (char *)node2.content);
	printf("%s\n\n", (char *)node3.content);
	printf("Nova lista:\n");
	t_list *current = new_lst;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&new_lst, ft_del);
	free(node1.content);
	free(node2.content);
	free(node3.content);
	return (0);
}*/