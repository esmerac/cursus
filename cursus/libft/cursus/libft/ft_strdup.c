/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:47:49 by emmera            #+#    #+#             */
/*   Updated: 2024/02/21 16:18:58 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen((char *)s1) + 1;
	ptr = (char *)ft_calloc(len, sizeof(char));
	if (ptr == 0)
		return (0);
	ft_strlcpy(ptr, s1, len);
	return (ptr);
}
