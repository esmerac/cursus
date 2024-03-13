/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:35:23 by emmera            #+#    #+#             */
/*   Updated: 2024/03/13 20:49:02 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while ((*str != '\0') && (*str != (char)c))
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}
/* int main()
{
    const char* string = "Hola gatito, chu";
    
    char *end = ft_strchr(string, 'g');
    
    printf("%s\n", end);

    return (0);
} */
