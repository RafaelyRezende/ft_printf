/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:46:21 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/19 17:28:36 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_specifier(char *c, va_list args)
{
	while (*(++c))
	{
		if (*c == 'd' || *c == 'i')
			return (ft_decimal(va_arg(args, int)));
		else if (*c == 'c')
			return (ft_character(va_arg(args, unsigned int)));
		else if (*c == 'p')
			return (ft_pointer(va_arg(args, unsigned long long)));
		else if (*c == 's')
			return (ft_string(va_arg(args, char *)));
		else if (*c == 'u')
			return (ft_unsigned(va_arg(args, unsigned int)));
		else if (*c == 'x' || *c == 'X')
			return (ft_hexa(va_arg(args, unsigned int)));
		else if (*c == '%')
			return (ft_putchar('%'));
		else
			return (0);
	}
}
int	ft_printf(const char *fmt, ...)
{
	va_list 		args;
	unsigned char	*c;
	uint8_t			flags;

	va_start(args, fmt)
	c = fmt;
	while (*c && *c != '%')
	{
		ft_putchar(*c);
		c++;
	}
	if (*c)
		ft_format_specifier(c, args);
	return (0);
}
