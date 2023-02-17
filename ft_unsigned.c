/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eablak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:01:03 by eablak            #+#    #+#             */
/*   Updated: 2022/10/21 11:22:02 by eablak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nbr, int *i)
{
	if (nbr <= 9 && nbr >= 0)
		*i += ft_putchr(nbr + '0');
	if (nbr > 9)
	{
		ft_unsigned(nbr / 10, i);
		ft_unsigned(nbr % 10, i);
	}
	return (*i);
}
