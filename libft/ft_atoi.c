/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:40:20 by emmera            #+#    #+#             */
/*   Updated: 2024/03/14 16:51:28 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
//	int	i;
	int	signo;
	int	nb;

//	i = 0;
	signo = 0;
	nb = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signo++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if (signo % 2 == 1)
		nb = -nb;
	return (nb);
}
/* #include <stdio.h>
int	main()

{
	printf("%i\n", ft_atoi(" -1234ab567"));
	printf("%i", atoi(" -1234ab567"));
	return (0);
} */