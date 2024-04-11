/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:05:08 by emmera            #+#    #+#             */
/*   Updated: 2024/04/11 19:39:47 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(va_list args, char str)
{
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'p')
	{
		write(1, "0x", 2);
		return (2 + ft_putnbr_base(va_arg(args, unsigned long),
				"0123456789abcdef"));
	}
	else if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (str == 'x')
		return (ft_putnbr_base((size_t)va_arg(args, unsigned int),
				"0123456789abcdef"));
	else if (str == 'X')
		return (ft_putnbr_base((size_t)va_arg(args, unsigned int),
				"0123456789ABCDEF"));
	else if (str == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		result;
	int		i;

	va_start(args, str);
	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			result += ft_type(args, str[i + 1]);
			i++;
		}
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (result);
}
/* #include <stdio.h>

int	main(void)
{
	char			caracter;
	char			*cadena;
	void			*puntero;
	int				decimal;
	int				entero;
	unsigned int	sin_signo;
	int				hexadecimal;

	caracter = 'A';
	cadena = "Me gustan los gatos";
	puntero = (void *)69420;
	decimal = 42;
	entero = -2147483648;
	sin_signo = -123;
	hexadecimal = 254;

	ft_printf("caracter: %c\n", caracter);
	//printf("caracter: %c\n", caracter);
	ft_printf("cadena: %s\n", cadena);
	//printf("cadena: %s\n", cadena);
	ft_printf("puntero: %p\n", puntero);
	printf ("puntero: %p\n", puntero);
	ft_printf("decimal: %d\n", decimal);
	printf("decimal: %d\n", decimal);
	ft_printf("entero: %d\n", entero);
	printf("entero: %d\n", entero);
	ft_printf("sin signo: %u\n", sin_signo);
	printf("sin signo: %u\n", sin_signo);
	ft_printf("hexadecimal: %x\n", hexadecimal);
	printf("hexadecimal: %x\n", hexadecimal);
	ft_printf("hexadecimal: %X\n", hexadecimal);
	printf("hexadecimal: %X\n", hexadecimal);
	ft_printf("%%\n");
	return (0);
} */
