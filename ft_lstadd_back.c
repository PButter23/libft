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
    
}*/
