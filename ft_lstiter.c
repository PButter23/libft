/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:06:58 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:31:14 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_uppercase(void *content)
{
	char	*str = (char *)content;
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*int main(void)
{
	t_list	node1, node2, node3;
	t_list	*lst;

	node1.content = ft_strdup("ola");
	node1.next = &node2;
	node2.content = ft_strdup("adeus");
	node2.next = &node3;
	node3.content = ft_strdup("HelloBye");
	node3.next = NULL;
	lst = &node1;
	ft_lstiter(lst, ft_uppercase);
	printf ("%s\n", (char *)node1.content);
	printf ("%s\n", (char *)node2.content);
	printf ("%s", (char *)node3.content);
	free(node1.content);
	free(node2.content);
	free(node3.content);
	return (0);
}*/