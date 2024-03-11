/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:13:58 by emmera            #+#    #+#             */
/*   Updated: 2024/03/11 16:38:50 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/* 
void f(void *str)
{
	char *ch = str;
	while (*ch)
	{
		*ch += 1;
		ch++;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	char str1[10] = "h";
	char str2[10] = "p";
	
	lst = ft_lstnew(str1);
	new = ft_lstnew(str2);
	ft_lstadd_back(&lst, new);
	ft_lstiter(lst, f);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	return (0);
} */