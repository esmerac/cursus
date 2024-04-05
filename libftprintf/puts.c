/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:47:20 by emmera            #+#    #+#             */
/*   Updated: 2024/04/05 21:09:01 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

/* int	ft_putnbr(int n)
{
	int	nb1;
	int	divnb1;
	int	restnb1;
	int	result;

	result = 0;
	if (n == -2147483648)
		result = write(1, "-2147483648", 11);
	else
	{
		nb1 = n;
		if (nb1 < 0)
		{
			nb1 = -nb1;
			result += ft_putchar("-");
		}
		divnb1 = (nb1 / 10);
		if (nb1 >= 10)
		{
			result += ft_putnbr_fd(divnb1, 1);
		}
		restnb1 = ((nb1 % 10) + '0');
		result += ft_putchar(&restnb1);
	}
	return (result);
} */

int	ft_putnbr_base(char *base, size_t n)
{
	int	result;
	size_t	len;

	//nb1 = (long)n;
	result = 0;
	len = ft_strlen(base);
	//conseguir la longitud de la base
	if (n < 0)
	{
		n = -n;
		result += ft_putchar('-');
	}
	if (n >= len)
	{
		result += ft_putnbr_base(base, (n / len));
	}
	result += ft_putchar(base[n % len]);

	return (result);
}

/* int	ft_putstr(char *s)
{
	int	result;

	result = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		result += ft_putchar(*s);
		s++;
	}
	return (result);
} */

int	main(void)
{
	char *frase = "0123456789ABCDEF";
	int result = ft_putnbr_base(frase, 42);
	//printf("%i\n", result);
	return (0);
}
