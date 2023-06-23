/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:59:17 by hsaktiwy          #+#    #+#             */
/*   Updated: 2022/11/07 12:41:42 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checkcheck(char s, va_list arg)
{
	int	i;

	i = 0;
	if (s == 's')
		i = ft_string(arg);
	else if (s == 'c')
		i = ft_char(arg);
	else if (s == 'x')
		i = ft_lowerhexa(arg);
	else if (s == 'X')
		i = ft_upperhexa(arg);
	return (i);
}

static int	check(char s, va_list arg)
{
	int	i;

	i = 0;
	if (s == '%')
	{
		write(1, "%", 1);
		i++;
	}
	else if (s == 'p')
		i = ft_ptohexa(arg);
	else if (s == 'i')
		i = ft_integer(arg);
	else if (s == 'u')
		i = ft_unsignedint(arg);
	else if (s == 'd')
		i = ft_decimale(arg);
	else
		i = checkcheck(s, arg);
	return (i);
}

int	ft_printf(const char *src, ...)
{
	va_list	arg;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(arg, src);
	while (src[i])
	{
		while (src[i] && src[i] != '%')
		{
			write(1, &src[i++], 1);
			count++;
		}
		if (src[i] == '%')
		{
			i++;
			count += check(src[i++], arg);
		}
	}
	va_end(arg);
	return (count);
}
