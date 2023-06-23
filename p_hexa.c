/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_hexa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:32:58 by hsaktiwy          #+#    #+#             */
/*   Updated: 2022/11/07 13:12:13 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ptohexa(unsigned long long n, char *c)
{
	unsigned long long	x;
	unsigned long long	r;

	x = n / 16;
	r = n % 16;
	if (x != 0)
		ptohexa(x, "0123456789abcdef");
	write(1, &c[r], 1);
}

static int	strlenphexa(unsigned long long n)
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

int	ft_ptohexa(va_list arg)
{
	void	*x;

	x = va_arg(arg, void *);
	write(1, "0x", 2);
	ptohexa((unsigned long long)x, "0123456789abcdef");
	return (strlenphexa((unsigned long long)x) + 2);
}
