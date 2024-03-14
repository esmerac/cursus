/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:59:42 by emmera            #+#    #+#             */
/*   Updated: 2024/03/14 12:33:16 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
/* int	 main(void)
{
	char s[] = "hola";
	printf("%s\n", s);
	size_t	n = 1;
	ft_bzero(s, n);
	printf("%s\n", s);
	return (0);
} */
