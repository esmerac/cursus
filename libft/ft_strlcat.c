/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:54:15 by emmera            #+#    #+#             */
/*   Updated: 2024/03/19 15:15:56 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	int		i;

	i = 0;
	if ((!dst || !src) && dstsize == 0)
		return (0);
	dst_len = ft_strlen(dst);
	while (dst[i])
		i++;
	if (dstsize < dst_len)
		return (dstsize + ft_strlen((char *)src));
	ft_strlcpy(dst + i, src, dstsize - i);
	return (dst_len + ft_strlen((char *)src));
}
/* int main() {
    char dst[50] = "Hola ";
    char src[] = "gatito";
    size_t dstsize;
    size_t result;

    // Prueba 1: Concatenar una cadena completa
	dstsize = 20;
    result = ft_strlcat(dst, src, dstsize);
    printf("1Resultado: %s\nLongitud total: %zu\n", dst, result);

    // Prueba 2: Concatenar con un tamaño de destino más pequeño que la longitud de la cadena de origen
    dstsize = 5; // Ahora solo queremos copiar los primeros 5 caracteres
    result = ft_strlcat(dst, src, dstsize);
    printf("2Resultado: %s\nLongitud total: %zu\n", dst, result);

    // Prueba 3: Concatenar con un tamaño de destino igual a la longitud de la cadena de origen
    dstsize = strlen(dst);
    result = ft_strlcat(dst, src, dstsize);
    printf("3Resultado: %s\nLongitud total: %zu\n", dst, result);

    // Prueba 4: Concatenar con un tamaño de destino de 0
    dstsize = 0;
    result = ft_strlcat(dst, src, dstsize);
    printf("4Resultado: %s\nLongitud total: %zu\n", dst, result);

    return 0;
} */