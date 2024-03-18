/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:55:34 by emmera            #+#    #+#             */
/*   Updated: 2024/03/18 15:05:36 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list_pointer;

	list_pointer = malloc(sizeof(t_list));
	if (!list_pointer)
		return (0);
	list_pointer->content = content;
	list_pointer->next = NULL;
	return (list_pointer);
}
/* int	main(void)
{
	t_list	*s1;

	s1 = ft_lstnew("hola");

	printf("%s\n", (char *)(s1->content));
	return(0);
} */