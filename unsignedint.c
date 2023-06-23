/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsignedint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:22:59 by hsaktiwy          #+#    #+#             */
/*   Updated: 2022/11/02 11:10:38 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_unsignednbr_fd(unsigned int n, int fd)
{
	unsigned long	r;
	unsigned long	x;
	char			c;

	r = n % 10;
	x = n / 10;
	c = r + 48;
	if (x != 0)
		ft_put_unsignednbr_fd(x, fd);
	write(fd, &c, 1);
}

static int	unstrlen(unsigned int n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_unsignedint(va_list arg)
{
	unsigned int	x;

	x = va_arg(arg, unsigned int);
	ft_put_unsignednbr_fd(x, 1);
	return (unstrlen(x));
}
