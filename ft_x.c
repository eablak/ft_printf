/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eablak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:03:56 by eablak            #+#    #+#             */
/*   Updated: 2022/10/21 11:23:18 by eablak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int nbr, int *i)
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
		ft_x(nbr / 16, i);
		ft_x(nbr % 16, i);
	}
	return (*i);
}
