/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:54:05 by emmera            #+#    #+#             */
/*   Updated: 2024/03/14 12:47:43 by emmera           ###   ########.fr       */
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
/* int	main(void)
{
	char s[] = "hola";
	printf("%s\n", s);
	int	a = 'g';
	size_t	n = 3;
	ft_memset(s, a, n);
	printf("%s\n", s);
	
	return (0);
} */
