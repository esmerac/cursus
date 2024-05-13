/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:54:59 by emmera            #+#    #+#             */
/*   Updated: 2024/05/13 16:18:25 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//para leer datos del archivo y añairlo al contenido parcial
static char	*read_from_file(int fd)
{
	int			bytes_read;
	char		*cup_buffer;
	static int	count = 1;

	printf("ft_calloc#[%d]---", count++);
	cup_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (cup_buffer == NULL)
		return (NULL);
	bytes_read = read(fd, cup_buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (free (cup_buffer), NULL);
	return (cup_buffer);

}

//para obtener la siguinte linea del fd
char	*get_next_line(int fd)
{
	char	*basin_buffer;

	basin_buffer = read_from_file(fd);
	return (basin_buffer);
}

int	main(void)
{
	int		fd;
	char	*next_line;
	int		count;

	count = 0;
	fd = open("pop.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("error opening file");
		return (1);
	}
	while (1)
	{
		next_line = get_next_line(fd);
		if (next_line == NULL)
			break;
		count++;
		printf("[%d]:%s\n", count, next_line);
		free(next_line);
		next_line = NULL;
	}
	close(fd);
	return (0);
}


/* int	main(void)
{
	int		fd;
	char	*next_line;
	int		count;

	count = 0;
	fd = open("pop.txt", O_RDONLY);
	next_line = get_next_line(fd);
	count++;
	printf("[%d]: %s\n", count, next_line);
	next_line = NULL;
	close(fd);
	return (0);
} */