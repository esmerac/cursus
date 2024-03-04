/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:54:05 by emmera            #+#    #+#             */
/*   Updated: 2024/01/23 19:30:17 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
