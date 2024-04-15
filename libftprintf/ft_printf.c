/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:05:08 by emmera            #+#    #+#             */
/*   Updated: 2024/04/15 15:20:30 by emmera           ###   ########.fr       */
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
		else if (str[i] == '%' && str[i + 1] == '\0')
			return (result);
		else
			result += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (result);
}

/* int main() 
{
	char *cat;

	cat = "cat";

	printf("I love cats\n");
	ft_printf("I love cats\n");

	printf("| len %d\n", printf("I love cats"));
	ft_printf("| len %d\n", ft_printf("I love cats"));

	printf("| len %d\n", printf("test char %c %c %c %c", 'G', 'a', 't', 'o'));
	ft_printf("| len %d\n", ft_printf
	("test char %c %c %c %c", 'G', 'a', 't', 'o'));

	printf("| len %d\n", printf("test string %s %s", "Hello", "kitty"));
	ft_printf("| len %d\n", ft_printf("test string %s %s", "Hello", "kitty"));

	printf("| len %d\n", printf("test pointer %p", cat));
	ft_printf("| len %d\n", ft_printf("test pointer %p", cat));

	printf("| len %d\n", printf("test int %%d %d %d %d", 10, 11, 12));
	ft_printf("| len %d\n", ft_printf("test int %%d %d %d %d", 10, 11, 12));

	printf("| len %d\n", printf("test int %%i %i %i %i", 10, 11, 12));
	ft_printf("| len %d\n", ft_printf("test int %%i %i %i %i", 10, 11, 12));

	printf("| len %d\n", printf("test int %%u %u %u %u", -10, -11, -12));
	ft_printf("| len %d\n", ft_printf("test int %%u %u %u %u", -10, -11, -12));

	printf("| len %d\n", printf("test hex %x", 42424242));
	ft_printf("| len %d\n", ft_printf("test hex %x", 42424242));

	printf("| len %d\n", printf("test HEX %X", 42424242));
	ft_printf("| len %d\n", ft_printf("test HEX %X", 42424242));

	printf("| len %d\n", printf("%p", (void *)-14523));
	ft_printf("| len %d\n", ft_printf("%p", (void *)-14523));

	//printf("| len %d\n", printf("%"));
	ft_printf("| len %d\n", ft_printf("%%%"));

	printf("| len %d\n", printf("multiple test
	 %i %s %x %p", 10, "cat", 122, cat));
	ft_printf("| len %d\n", ft_printf("mu
	ltiple test %i %s %x %p", 10, "cat", 122, cat));

	return (0);
} */
