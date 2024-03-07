/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:14:56 by emmera            #+#    #+#             */
/*   Updated: 2024/03/07 18:37:32 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_list;
	void	*tmp;

	if (!lst || !del || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new = ft_lstnew(tmp);
		if (!new)
		{
			del(tmp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new);
		lst = lst->next;
	}
	return (new_list);
}
/*#include <stdio.h>
#include "libft.h"

void	f(void *content)
{
	printf("%s\n", (char *)content);
}

void	f2(unsigned int i, char	*s)
{
	if(ft_isalpha((int)*s))
		*s -= 32;
}

void	*f3(void *content)
{
	ft_striteri((char *)content,f2);
	return (content);
}
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list;
	t_list	*list2;
	t_list	*node;
	t_list	*node2;
	t_list	*node3;

	list = 0;
	node2 = ft_lstnew(ft_strdup("Tonky-Wonky"));
	node = ft_lstnew(ft_strdup("Dopsy"));
	node3 = ft_lstnew(ft_strdup("Lolo"));

	ft_lstadd_back(&list, node);
	ft_lstadd_front(&list, node2);
	ft_lstadd_back(&list, node3);
	printf("Size: %d\n", ft_lstsize(list));
	ft_lstiter(list, f);
	//ft_lstdelone(node, &del);
	printf("DESPUES DEL DELONE\n");
	ft_lstiter(list, f);
	printf("LSTMAP:\n");
	list2 = ft_lstmap(list,f3, del);
	ft_lstiter(list2, f);
	return (0);
}*/