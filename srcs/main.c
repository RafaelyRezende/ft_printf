/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:44:35 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/19 15:21:53 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>

int	main()
{
	uint8_t	hax;

	hax = 0x41;
	while (hax < 0x5A)
	{
			printf("%*d", hax);
			hax += 1;
	}
	return (0);
}
