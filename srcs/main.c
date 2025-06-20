/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:44:35 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/06/20 08:58:00 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>
#include <limits.h>

void	test_integer(void)
{
	const int	nums[3] = {0, INT_MAX, INT_MIN};
	int	i;

	i = 0;
	while (i < 3)
	{
		printf("Integer (%d):%d\n", i + 1, nums[i]);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		printf("Integer width(%d):%4d\n", i + 1, nums[i]);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		printf("Integer precision(%d):%.3d\n", i + 1, nums[i]);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		printf("Integers width & precision(%d):%2.1d\n", i + 1, nums[i]);
		i++;
	}
}

void	test_uinteger(void)
{
	const unsigned int	unums[] = {0, UINT_MAX};
	unsigned int	i;

	i = 0;
	while (i < 2)
	{
		printf("Unsigned int base(%d):%d\n", i + 1, unums[i]);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		printf("Unsigned int width(%d):%10d\n", i + 1, unums[i]);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		printf("Unsigned int precision(%d):%.2d\n", i + 1, unums[i]);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		printf("Unsigned int width & precision(%d):%5.2d\n", i + 1, unums[i]);
		i++;
	}
}

void	test_hexadecimal(void)
{
	const int	hexas[] = {0};

	printf("%x", hexas[0]);
}
int	main()
{
	test_integer();
	test_uinteger();
	return (0);
}
