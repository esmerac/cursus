/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:16:03 by emmera            #+#    #+#             */
/*   Updated: 2024/02/29 19:17:36 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/* #include <fcntl.h>
// cc -Wall -Wextra -Werror ft_putstr_fd.c ft_putchar_fd.c  && ./a.out && rm a.out && rm test.txt
int	main()
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (0);
	else 
		ft_putstr_fd("gato", fd);
	close(fd);
	system("cat test.txt");
	return (0);
}*/