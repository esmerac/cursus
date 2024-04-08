/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:05:08 by emmera            #+#    #+#             */
/*   Updated: 2024/04/08 18:49:58 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_type(va_list args, char str)
{
	int	i;

	i = 0;
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, int)));
	//else if (str == 'p')
	//	return (ft_)
	else if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	//else if (str == '')
	return (0);
}