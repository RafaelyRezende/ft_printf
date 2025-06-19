/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:13:44 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/19 14:07:18 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

# define MINUS 1
# define ZERO 2
# define DOT 4
# define POUND 8
# define SPACE 16
# define PLUS 32

int	ft_printf(const char *, ...);
uint8_t	ft_flag(const *char);

 void	ft_check_minus(const char *c);
 void	ft_check_zero(const char *c);
 void	ft_check_dot(const char *c);
 void	ft_check_pound(const char *c);
 void	ft_check_space(const char *c);
 void	ft_check_plus(const char *c);
#endif
