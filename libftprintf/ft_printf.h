/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:19:36 by emmera            #+#    #+#             */
/*   Updated: 2024/04/11 18:04:00 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(char const *str);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putnbr_base(size_t n, char *base);
int		ft_putstr(char *s);

#endif