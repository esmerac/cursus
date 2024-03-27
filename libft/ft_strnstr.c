/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:40:10 by emmera            #+#    #+#             */
/*   Updated: 2024/03/19 15:16:43 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if ((!s1 || !s2) && len == 0)
		return (0);
	if (s2[x] == '\0')
		return ((char *) s1);
	while (s1[i] != '\0' && i < len)
	{
		while ((s1 [i + x] == s2[x]) && ((x + i) < len)
			&& (s2[x] != '\0'))
		{
			if (s2[x + 1] == '\0')
				return ((char *) &s1[i]);
			x++;
		}
		i++;
		x = 0;
	}
	return (0);
}

/* int main() 
{
    const char haystack[] = "Hola gente, me gustan los gatitos";
    const char needle[] = "gente";
    size_t len = 50;

    char *resultado = ft_strnstr(haystack, needle, len);
	printf("%s\n", resultado);
    return 0;
} */