/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:55:34 by emmera            #+#    #+#             */
/*   Updated: 2024/03/06 15:07:56 by emmera           ###   ########.fr       */
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

