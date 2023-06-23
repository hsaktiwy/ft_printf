/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:05:38 by hsaktiwy          #+#    #+#             */
/*   Updated: 2022/11/02 10:45:56 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlenhexa(unsigned int n)
{
	int	i;

	i = 1;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static void	hexabase(unsigned int n, const char *c)
{
	unsigned int	r;
	unsigned int	x;

	r = n % 16;
	x = n / 16;
	if (x != 0)
		hexabase(x, c);
	write(1, &c[r], 1);
}

int	ft_lowerhexa(va_list arg)
{
	unsigned int	x;

	x = va_arg(arg, unsigned int);
	hexabase(x, "0123456789abcdef");
	return (ft_strlenhexa(x));
}

int	ft_upperhexa(va_list arg)
{
	unsigned int	x;

	x = va_arg(arg, unsigned int);
	hexabase(x, "0123456789ABCDEF");
	return (ft_strlenhexa(x));
}
