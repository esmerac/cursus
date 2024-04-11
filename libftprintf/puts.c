/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:47:20 by emmera            #+#    #+#             */
/*   Updated: 2024/04/11 19:42:36 by emmera           ###   ########.fr       */
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

int	ft_putnbr(int nb)
{
	int		result;

	result = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		nb = -nb;
		result += ft_putchar('-');
	}
	if (nb > 9)
	{
		result += ft_putnbr(nb / 10);
	}
	result += ft_putchar(nb % 10 + '0');
	return (result);
}

int	ft_putnbr_base(size_t n, char *base)
{
	int		result;
	size_t	len;

	result = 0;
	len = ft_strlen(base);
	if (n < 0)
	{
		n = -n;
		result += ft_putchar('-');
	}
	if (n >= len)
	{
		result += ft_putnbr_base((n / len), base);
	}
	result += ft_putchar(base[n % len]);
	return (result);
}

int	ft_putstr(char *s)
{
	int		result;
	char	*str;

	result = 0;
	str = s;
	if (!s)
		return (ft_putstr("(null)"));
	while (*str != '\0')
	{
		result += ft_putchar(*str);
		str++;
	}
	return (result);
}

/* int	main(void)
{
	char *f = "0123456789ABCDEF";
	int result = ft_putnbr_base(f, 42);
	//printf("%i\n", result);
	return (0);
} */
