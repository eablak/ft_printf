/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eablak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:56:49 by eablak            #+#    #+#             */
/*   Updated: 2022/10/21 11:25:16 by eablak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(int nbr, int *i);
int	ft_putchr(char c);
int	ft_putstr(char *s);
int	ft_pointer(unsigned long nbr, int *i);
int	ft_unsigned(unsigned int nbr, int *i);
int	ft_upx(unsigned int nbr, int *i);
int	ft_x(unsigned int nbr, int *i);

#endif
