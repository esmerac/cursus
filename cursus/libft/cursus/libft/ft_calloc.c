/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:46:49 by emmera            #+#    #+#             */
/*   Updated: 2024/02/28 17:20:46 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr)
	{
		ft_memset(ptr, 0, count * size);
		return (ptr);
	}
	return (0);
}
/*int	main()
{
	char *str;
	char *str2;

	{
		str = ft_calloc(SIZE_MAX, SIZE_MAX);
		str2 = calloc(SIZE_MAX, SIZE_MAX);
		printf("%p\n", str);
		printf("%p\n", str2);
	}
	{
		str = ft_calloc(SIZE_MAX - 1, SIZE_MAX - 1);
		str2 = calloc(SIZE_MAX - 1, SIZE_MAX - 1);
		printf("%p\n", str);
		printf("%p\n", str2);
	}
	printf("%llu\n", (SIZE_MAX - 1) * (SIZE_MAX - 1));
	{
		str = ft_calloc(SIZE_MAX - 1, 1);
		str2 = calloc(SIZE_MAX - 1, 1);
		printf("%p\n", str);
		printf("%p\n", str2);
	}
	{
		str = ft_calloc(SIZE_MAX, 1);
		str2 = calloc(SIZE_MAX, 1);
		printf("%p\n", str);
		printf("%p\n", str2);
	}
	return (0);
}*/