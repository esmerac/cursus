/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:57:52 by emmera            #+#    #+#             */
/*   Updated: 2024/03/18 16:19:47 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/* int	main(void)
{
	t_list	*nuevo;
	t_list	*nuevo1;
	
	nuevo = ft_lstnew("hola");
	nuevo1 = ft_lstnew("gatito");
	ft_lstadd_front(&nuevo, nuevo1);
	printf("%s\n", (char *)nuevo->content);
	printf("%s\n", (char *)nuevo->next->content);
	return(0);
} */
