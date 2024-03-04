/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:15:10 by emmera            #+#    #+#             */
/*   Updated: 2024/02/29 19:53:30 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*int	main(void)
{
	int		fd;
	char	*str = "Hola Mundo!!";

	// Abre o crea un archivo llamado "ejemplo.txt"
	// en modo de escritura (O_WRONLY)
	// y con la bandera O_CREAT que crea el archivo si no existe.
	fd = open("ejemplo.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (EXIT_FAILURE);
	}

	// Llama a la función para escribir el carácter en el archivo
	ft_putendl_fd(str, fd);

	// Cierra el archivo
	if (close(fd) == -1)
	{
		perror("Error al cerrar el archivo");
		return (EXIT_FAILURE);
	}

	// Mostrar el contenido del archivo
	system("cat ejemplo.txt");

	return (0);
}*/