/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:13:24 by emmera            #+#    #+#             */
/*   Updated: 2024/03/11 16:40:19 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}
/* void ft_free(void *content)
{
	content = NULL;
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;
	t_list	*new3;

	lst = ft_lstnew("one");
	new = ft_lstnew("two");
	new2 = ft_lstnew("three");
	new3 = ft_lstnew("four");
	printf("%s\n", lst->content);
	ft_lstadd_back(&lst, new);
	printf("%s\n", ft_lstlast(lst)->content);
	ft_lstadd_back(&lst, new2);
	printf("%s\n", ft_lstlast(lst)->content);
	ft_lstadd_back(&lst, new3);
	printf("%s\n", ft_lstlast(lst)->content);
	ft_lstclear(&lst, ft_free);
	if (lst == NULL)
		printf("la lista está vacía\n");
	return (0);
} */
