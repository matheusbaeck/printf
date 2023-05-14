/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:50:39 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/18 07:31:00 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "limits.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putany(va_list arg_list, char format);
int		ft_is_format(va_list arg_list, char format);
int		ft_print(char *s);
int		ft_printf(const char *s, ...);
char	*ft_strchr(const char *s, int c);
int		ft_p(va_list arg_list);
int		ft_d(va_list arg_list);
int		ft_u(va_list arg_list);
int		ft_putbase(long long int nb, char *set, int base, int i);
int		ft_putbaseu(unsigned long int nb, char *set, int base, int i);
int		ft_x(va_list arg_list);
int		ft_xx(va_list arg_list);

#endif