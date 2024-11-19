/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:39:37 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:34:20 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_del_content(void *content)
{
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*int main(void)
{
    t_list  *lst;
    lst = malloc(sizeof(t_list));
    if (lst == NULL)
        return (1);
    lst->content = malloc(4 * sizeof(char));
    if(lst->content == NULL)
    {
        free(lst);
        return (1);
    }
    memcpy(lst->content, "ola", 4);
    ft_lstdelone(lst, ft_del_content);
	if (lst == NULL)
		printf ("Lista limpa com sucesso!\n");
	else
		printf ("Erro ao limpar a lista.\n");
    return (0);
}*/