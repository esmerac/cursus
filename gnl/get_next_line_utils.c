/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:30:20 by emmera            #+#    #+#             */
/*   Updated: 2024/05/10 19:16:16 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr)
	{
		ft_memset(ptr, 0, count * size);
		return (ptr);
	}
	return (NULL);
}

void	*ft_memset(void *a, int c, size_t len)
{
	unsigned char	*dest;
	unsigned char	value;
	size_t			i;

	i = 0;
	dest = a;
	value = (unsigned char)c;
	while (i < len)
	{
		dest[i] = value;
		i++;
	}
	return (a);
}


