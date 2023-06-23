/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:03:15 by hsaktiwy          #+#    #+#             */
/*   Updated: 2022/11/07 11:33:53 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(va_list arg)
{
	char	*s;

	s = va_arg(arg, char *);
	if (s)
	{
		ft_putstr_fd(s, 1);
		return (ft_strlen(s));
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}
