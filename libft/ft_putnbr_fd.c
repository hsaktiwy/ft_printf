/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:05:22 by hsaktiwy          #+#    #+#             */
/*   Updated: 2022/10/20 20:01:00 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	exception(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	int		r;
	int		x;
	char	c;

	if (n == -2147483648)
	{
		exception(n, fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	r = n % 10;
	x = n / 10;
	c = r + 48;
	if (x != 0)
		ft_putnbr_fd(x, fd);
	write(fd, &c, 1);
}
