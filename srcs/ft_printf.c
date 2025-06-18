/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:50:31 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/18 14:51:07 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list args;
	char	*c;

	va_start(args, fmt)
	c = fmt;
	while (*c)
	{
		if (*c != '%')
		{
			putchar(c);
			c++;
		}
		else
		{
				ft_checker();
		}
	}
}
