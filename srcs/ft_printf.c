/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:46:21 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/20 15:09:23 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_decimal(va_list args, uint8_t flag)
{
	return ;
}

uint8_t	ft_format_specifier(va_list args, char *c, uint8_t flag)
{
		if (*c == 'd' || *c == 'i')
			return (ft_decimal(va_arg(args, int)), flag);
		else if (*c == 'c')
			return (ft_character(va_arg(args, unsigned int)), flag);
		else if (*c == 'p')
			return (ft_pointer(va_arg(args, unsigned long long)), flag);
		else if (*c == 's')
			return (ft_string(va_arg(args, char *)), flag);
		else if (*c == 'u')
			return (ft_unsigned(va_arg(args, unsigned int)), flag);
		else if (*c == 'x' || *c == 'X')
			return (ft_hexa(va_arg(args, unsigned int)), flag);
		else
		{
			putchar(*c);
			return (1);
		}
}

int	ft_check_flags(char **c)
{
	uint8_t	flag;

	flag = 0;
	while (ft_is_flag(**c))
	{
		if (**c == '-')
			flag |= MINUS;
		if (**c == '0')
			flag |= ZERO;
		if (**c == '.')
			flag |= DOT;
		if (**c == '#')
			flag |= POUND;
		if (**c == ' ')
			flag |= SPACE;
		if (**c == '+')
			flag |= PLUS;
		(*c)++;
	}
	return (flag);
}

int	ft_is_flag(char c)
{
	if (c == '-' || c == '0' || c == '.' || c == '#' || c == ' ' || c == '+') 
		return (1);
	return (0);
}

void	ft_putchar(const char c)
{
	write(1, c, 1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list 		args;
	uint8_t			flags;
	int				state;

	state = 0;
	va_start(args, fmt)
	while (fmt && *fmt)
	{
		if (*fmt != '%')
		{
			ft_putchar(fmt);
			state++;
		}
		else
		{
			flags = ft_check_flags(fmt);
			state += ft_format_specifier(args, fmt);
		}
		fmt++;
	}
	return (state);
}

int	main(void)
{
	printf("-------------TEST--------------\n");
}
