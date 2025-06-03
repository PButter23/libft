/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:07:09 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/14 19:36:06 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_listptr	random;

	random = malloc(sizeof(t_list));
	if (random == NULL)
		return (NULL);
	random->content = content;
	random->next = NULL;
	return (random);
}
/*int main(void)
{
    char *content;
    t_list *c;
    content = "Oladeus";
    c = ft_lstnew(content);
    printf ("%s", (char *)c->content);
}*/
