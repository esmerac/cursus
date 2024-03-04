/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:39:17 by emmera            #+#    #+#             */
/*   Updated: 2024/02/19 16:32:12 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	car;
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)str;
	car = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == car)
			return ((void *) &src[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
	const void	*src = "hola";
	printf("%s", ft_memchr(src, 'l', 3));
	return (0);
}*/