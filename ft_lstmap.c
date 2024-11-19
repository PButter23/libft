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
