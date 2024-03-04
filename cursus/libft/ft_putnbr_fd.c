/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:14:34 by emmera            #+#    #+#             */
/*   Updated: 2024/02/29 20:11:20 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nb1;
	int	divnb1;
	int	restnb1;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		nb1 = n;
		if (nb1 < 0)
		{
			nb1 = -nb1;
			write(fd, "-", 1);
		}
		divnb1 = (nb1 / 10);
		if (nb1 >= 10)
		{
			ft_putnbr_fd(divnb1, fd);
		}
		restnb1 = ((nb1 % 10) + '0');
		write (fd, &restnb1, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(-767);
	return (0);
}*/