/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eablak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:49:30 by eablak            #+#    #+#             */
/*   Updated: 2022/10/21 11:20:55 by eablak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long nbr, int *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr < 16)
	{
		if (nbr < 10)
			*i += ft_putchr(nbr + '0');
		else
			*i += ft_putchr(base[nbr % 16]);
	}
	if (nbr >= 16)
	{
		ft_pointer(nbr / 16, i);
		ft_pointer(nbr % 16, i);
	}
	return (*i);
}
