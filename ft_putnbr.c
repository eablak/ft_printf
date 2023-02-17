/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eablak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:59:14 by eablak            #+#    #+#             */
/*   Updated: 2022/10/21 10:59:16 by eablak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr, int *i)
{
	if (nbr == -2147483648)
	{
		*i += ft_putchr('-');
		nbr = nbr / 10;
		ft_putnbr(-nbr, i);
		*i += ft_putchr('8');
	}
	else if (nbr < 0)
	{
		*i += ft_putchr('-');
		ft_putnbr(-nbr, i);
	}
	else
	{
		if (nbr > 9)
			ft_putnbr(nbr / 10, i);
		*i += ft_putchr('0' + (nbr % 10));
	}
	return (*i);
}
