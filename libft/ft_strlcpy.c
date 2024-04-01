/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:41:02 by emmera            #+#    #+#             */
/*   Updated: 2024/02/22 19:45:35 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/* int main()
{
	const char src[] = "hola";
	char dst[] = "p";
	size_t p = 10;
	printf("%s\n %zu\n", dst, ft_strlcpy(dst, src, p));
	return (0);

    char src[] = "Hola Mundo";
    char dst[20]; // Buffer suficientemente grande para almacenar la cadena de origen
    size_t dstsize = sizeof(dst);
    size_t copied_len;

    // Prueba 1: Copiar una cadena completa
    copied_len = ft_strlcpy(dst, src, dstsize);
    printf("Copiado: %s\nLongitud copiada: %zu\nLongitud total: %zu\n", dst, copied_len, strlen(src));

    // Prueba 2: Copiar una cadena con un tamaño de destino más pequeño
    dstsize = 5; // Ahora solo queremos copiar los primeros 5 caracteres
    copied_len = ft_strlcpy(dst, src, dstsize);
    printf("Copiado: %s\nLongitud copiada: %zu\nLongitud total: %zu\n", dst, copied_len, strlen(src));

    // Prueba 3: Copiar una cadena con un tamaño de destino igual a la longitud de la cadena de origen
    dstsize = strlen(src);
    copied_len = ft_strlcpy(dst, src, dstsize);
    printf("Copiado: %s\nLongitud copiada: %zu\nLongitud total: %zu\n", dst, copied_len, strlen(src));

    // Prueba 4: Copiar una cadena con un tamaño de destino de 0
    dstsize = 0;
    copied_len = ft_strlcpy(dst, src, dstsize);
    printf("Copiado: %s\nLongitud copiada: %zu\nLongitud total: %zu\n", dst, copied_len, strlen(src));

    return 0;
} */