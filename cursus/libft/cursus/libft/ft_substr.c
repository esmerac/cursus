/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:00:58 by emmera            #+#    #+#             */
/*   Updated: 2024/02/28 19:54:40 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static char	*onlynull(void)
{
	char	*str;

	str = (char *)malloc(1 * sizeof(char));
	if (!str)
		return (0);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (len == 0)
		return (onlynull());
	s_len = ft_strlen((char *)s);
	if (start > s_len)
		return (onlynull());
	if (len > s_len - start)
		len = s_len - start;
	if (!s)
		return (0);
	str = (char *)malloc((len +1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, len +1);
	return (str);
}

/*
#include <stdio.h>
int		main(int argc, const char *argv[])
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	int		arg;

	printf("%s\n", ft_substr(str, 0, 10));
}*/