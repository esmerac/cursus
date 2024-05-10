/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:54:59 by emmera            #+#    #+#             */
/*   Updated: 2024/05/10 19:18:11 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		bytes_read;
	char	*cup_buffer;

	cup_buffer = ft_calloc(3 + 1, sizeof(char));
	if (cup_buffer == NULL)
		return (NULL);
	bytes_read = read(fd, cup_buffer, 3);
	if (bytes_read <= 0)
		return (NULL);
	return (cup_buffer);

}

int	main(void)
{
	int	fd;
	char	*next_line;
	int	count;

	count = 0;
	fd = open("pop.txt", O_RDONLY);
	while (1)
	{
		next_line = get_next_line(fd);
		if (next_line == NULL)
			break;
		count++;
		printf("[%d]: %s\n", count, next_line);
		next_line = NULL;
	}
	close(fd);
	return (0);
}

