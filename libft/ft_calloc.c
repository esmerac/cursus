/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:46:49 by emmera            #+#    #+#             */
/*   Updated: 2024/03/14 12:44:36 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdlib.h>

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
/* int	main()
{
	char	*str = ft_calloc(56, sizeof(char));
	int		success = 1;
	size_t	i = 0;

	if (str)
	{
		while (i < 56)
		{
			if (str[i] != 0)
				success = 0;
			i++;
		}
		if (success)
			printf("Calloc worked \n");
		else
			printf("Calloc failed \n");
		free (str);
	return (0);
} */