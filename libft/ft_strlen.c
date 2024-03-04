/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:01:40 by emmera            #+#    #+#             */
/*   Updated: 2024/02/22 18:40:02 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	size_t	strlen;

	strlen = 0;
	while (*str != '\0')
	{
		strlen++;
		str++;
	}
	return (strlen);
}
/*
#include <stdio.h>
#include <string.h>

// Prototipo de la función ft_strlen
unsigned long ft_strlen(const char *s);

int main() {
    // Cadena de prueba
    const char *str = "Hola, mundo!";

    // Llamada a ft_strlen
    unsigned long result1 = ft_strlen(str);

    // Llamada a strlen original
    unsigned long result2 = strlen(str);

    // Imprimir resultados
    printf("Resultado de ft_strlen: %lu\n", result1);
    printf("Resultado de strlen original: %lu\n", result2);

    // Comparar resultados
    if (result1 == result2) {
        printf("¡Las funciones coinciden!\n");
    } else {
        printf("¡Las funciones NO coinciden!\n");
    }

    return 0;
}
*/