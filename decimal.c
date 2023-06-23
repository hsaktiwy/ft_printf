/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:42:33 by hsaktiwy          #+#    #+#             */
/*   Updated: 2022/11/02 11:07:46 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbrstrlen(long n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_integer(va_list arg)
{
	int	x;

	x = va_arg(arg, int);
	ft_putnbr_fd(x, 1);
	return (nbrstrlen(x));
}

int	ft_decimale(va_list arg)
{
	int	x;

	x = va_arg(arg, int);
	ft_putnbr_fd(x, 1);
	return (nbrstrlen(x));
}
