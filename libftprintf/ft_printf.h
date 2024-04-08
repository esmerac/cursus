/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:19:36 by emmera            #+#    #+#             */
/*   Updated: 2024/04/08 18:40:00 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(char const *str);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbr_base(char *base, size_t n);
int		ft_putstr(char *s);

#endif