/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:00:22 by emmera            #+#    #+#             */
/*   Updated: 2024/03/19 16:07:47 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	len;
	size_t	i;
	size_t	end;

	i = 0;
	dst = 0;
	if (!s1 || !set)
		return (0);
	if (s1[0] == '\0')
		return (ft_calloc(1, 1));
	if (set)
	{
		len = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (((s1[len - 1]) && len > i) && (ft_strrchr(set, s1[len -1])))
			len--;
		end = len - i;
		dst = (char *)malloc(end + 1);
		if (!dst)
			return (0);
		ft_strlcpy(dst, ((char *)s1 + i), end + 1);
	}
	return (dst);
}
