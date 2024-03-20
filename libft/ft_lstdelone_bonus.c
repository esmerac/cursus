/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:01:08 by emmera            #+#    #+#             */
/*   Updated: 2024/03/18 20:51:56 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	printlist(void *lst)
{
	t_list	*aux_ptr;
	aux_ptr = lst;
	while (aux_ptr)
	{
		printf("%s -> ", (char *)aux_ptr->content);
		aux_ptr = aux_ptr->next;
	}
}
int	main(void)
{
	t_list	*new;
	t_list	*new1;
	
	new = ft_lstnew("gatos");
	new1 = ft_lstnew("gatitos");
	ft_lstadd_front(&new, new1);
	printf("%s\n", new->content);
	printf("%s\n", new->next->content);
	ft_lstdelone(new, &free);
	printf("%s\n", new->content);
	printf("%s\n", new->next->content);
	return(0);
} */