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

/* int	ft_putptr(unsigned long ptr)
{
	ft_putstr("0x", 1);

} */

int	ft_type(va_list args, char str)
{
	int	i;

	i = 0;
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, int)));
/* 	else if (str == 'p')
		return (ft_putnbr_base(va_arg(args, unsigned long), 
		&i, "0123456789abcdef", 'p')); */
	else if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
/* 	else if (str == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), &i, "0123456789", 10)); */
	else if (str == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned long), 
				"0123456789abcdef"));
	else if (str == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned long), 
				"0123456789ABCDEF"));
	else if (str == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int	result;
	int	i;

	va_start(args, str);
	result = 0;
	i = 0;

	while (str[i])
	{
		if (str[i] == '%')
		{
			result += ft_type(args, str[i + 1]);
			i++;
		}
		else
			result += ft_putchar(str[i]);
	}
		i++;
	va_end(args);
	return(result);

}
#include <stdio.h>
int	main(void)
{
	char caracter = 'A';
	char cadena[] = "Me gustan los gatos";
	void *puntero = (void *)69420;
	int entero = 42;
	int decimal = -25;
	unsigned int sin_signo = 123;
	int hexadecimal = 254;

ft_printf("caracter: %c\n", caracter);
printf("caracter: %c\n", caracter);
ft_printf("cadena: %s\n", cadena);
printf("cadena: %s\n", cadena);
ft_printf("entero: %d\n", entero);
printf("entero: %d\n", entero);


return (0);
}

int ft_type(va_list args, char str)
{
    int i;

    i = 0;
    if (str == 'c')
        return (ft_putchar(va_arg(args, int)));
    else if (str == 's')
        return (ft_putstr(va_arg(args, char *)));
    else if (str == 'p')
        return (ft_putnbr_base("0123456789abcdef", va_arg(args, unsigned long), 16));
    else if (str == 'd' || str == 'i')
        return (ft_putnbr(va_arg(args, int)));
    else if (str == 'u')
        return (ft_putnbr_base("0123456789", va_arg(args, unsigned int), 10));
    else if (str == 'x')
        return (ft_putnbr_base("0123456789abcdef", va_arg(args, unsigned int), 16));
    else if (str == 'X')
        return (ft_putnbr_base("0123456789ABCDEF", va_arg(args, unsigned int), 16));
    else if (str == '%')
        return (ft_putchar('%'));
    return (0);
}

int ft_printf(char const *str, ...)
{
    va_list args;
    int result = 0;
    int i = 0;

    va_start(args, str);

    while (str[i])
    {
        if (str[i] == '%')
        {
            result += ft_type(args, str[i + 1]);
            i++;
        }
        else
        {
            result += ft_putchar(str[i]);
        }
        i++;
    }
    va_end(args);
    return result;
}

int main(void)
{
    char caracter = 'A';
    char cadena[] = "Me gustan los gatos";
    void *puntero = (void *)69420;
    int entero = 42;
    int decimal = -25;
    unsigned int sin_signo = 123;
    int hexadecimal = 254;

    ft_printf("caracter: %c\n", caracter);
    ft_printf("cadena: %s\n", cadena);
    ft_printf("puntero: %p\n", puntero);
    ft_printf("entero: %d\n", entero);
    ft_printf("decimal: %d\n", decimal);
    ft_printf("sin_signo: %u\n", sin_signo);
    ft_printf("hexadecimal: %x\n", hexadecimal);

    return 0;