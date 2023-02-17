/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eablak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:02:02 by eablak            #+#    #+#             */
/*   Updated: 2022/10/21 11:30:06 by eablak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upx(unsigned int nbr, int *i)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr < 16)
	{
		if (nbr < 10)
			*i += ft_putchr(nbr + '0');
		else
			*i += ft_putchr(base[nbr % 16]);
	}
	if (nbr >= 16)
	{
		ft_upx(nbr / 16, i);
		ft_upx(nbr % 16, i);
	}
	return (*i);
}
