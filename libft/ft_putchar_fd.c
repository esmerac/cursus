/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:18:07 by emmera            #+#    #+#             */
/*   Updated: 2024/02/29 19:03:37 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <fcntl.h>
//cc -Wall -Wextra -Werror ft_putchar_fd.c && ./a.out && rm a.out && rm test.txt
int	main()
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (0);
	else 
		ft_putchar_fd('h', fd);
	close(fd);
	system("cat test.txt");
	return (0);
} */