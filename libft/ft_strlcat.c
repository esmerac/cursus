/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:54:15 by emmera            #+#    #+#             */
/*   Updated: 2024/03/19 15:15:56 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	int		i;

	i = 0;
	if ((!dst || !src) && dstsize == 0)
		return (0);
	dst_len = ft_strlen(dst);
	while (dst[i])
		i++;
	if (dstsize < dst_len)
		return (dstsize + ft_strlen((char *)src));
	ft_strlcpy(dst + i, src, dstsize - i);
	return (dst_len + ft_strlen((char *)src));
}
