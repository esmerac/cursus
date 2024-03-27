/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:17:58 by emmera            #+#    #+#             */
/*   Updated: 2024/02/29 13:58:52 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	if (!s || !f)
		return ;
	count = 0;
	while (*s)
	{
		f(count, s);
		s++;
		count++;
	}
}
/* #include <stdio.h>
void f(unsigned int index, char *c)
{
    *c = ft_toupper(*c);
}

int main()
{
    char s[] = "me gustan los gatos";
    ft_striteri(s, f);
    printf("%s\n", s); // Imprime "HOLA MUNDO"
    return 0;
} */