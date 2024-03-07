/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:59:21 by emmera            #+#    #+#             */
/*   Updated: 2024/03/06 19:30:42 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;

	lst = ft_lstnew("one");
	new = ft_lstnew("two");
	new2 = ft_lstnew("three");
	lst->next = new;
	new->next = new2;
	printf("%s\n", ft_lstlast(lst)->content);
	return (0);
}*/
