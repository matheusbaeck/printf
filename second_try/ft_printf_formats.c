/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_formats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:29:53 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/24 22:54:58 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(va_list arg_list)
{
	void	*p;

	p = va_arg(arg_list, void *);
	if (p == NULL)
		return (write(1, "0x0", 3));
	else
		write(1, "0x", 2);
	return (2 + ft_putbaseu((unsigned long int)p, "0123456789abcdef", 16, 0));
}

int	ft_d(va_list arg_list)
{
	int	nb;

	nb = va_arg(arg_list, int);
	return (ft_putbase(nb, "0123456789", 10, 0));
}

int	ft_u(va_list arg_list)
{
	unsigned int	u;

	u = va_arg(arg_list, unsigned int);
	return (ft_putbaseu(u, "0123456789", 10, 0));
}

int	ft_x(va_list arg_list)
{
	unsigned int	n;

	n = va_arg(arg_list, unsigned int);
	return (ft_putbaseu(n, "0123456789abcdef", 16, 0));
}

int	ft_xx(va_list arg_list)
{
	unsigned int	n;

	n = va_arg(arg_list, unsigned int);
	return (ft_putbaseu(n, "0123456789ABCDEF", 16, 0));
}
