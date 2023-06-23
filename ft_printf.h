/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:32:23 by hsaktiwy          #+#    #+#             */
/*   Updated: 2022/11/07 13:57:31 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *src, ...);
int		ft_string(va_list arg);
int		ft_char(va_list arg);
int		ft_ptohexa(va_list arg);
int		ft_lowerhexa(va_list arg);
int		ft_upperhexa(va_list arg);
int		ft_integer(va_list arg);
int		ft_unsignedint(va_list arg);
int		ft_decimale(va_list arg);
#endif
