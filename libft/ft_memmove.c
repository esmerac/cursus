/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:52:28 by emmera            #+#    #+#             */
/*   Updated: 2024/03/13 21:13:54 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d && d < s + len)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	//char s2[] = {67, 68, 67, 68, 69, 0, 45};
	char s_copy[] = { 0,  0,  0,  0,  0,  0, 0};

	ft_memmove (s_copy, s, strlen(s));

	printf("%s\n", s);
	printf("%s\n", s_copy);
} */