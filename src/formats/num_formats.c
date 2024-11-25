/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_formats.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:06:13 by pjarnac           #+#    #+#             */
/*   Updated: 2024/11/25 12:42:52 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "formats.h"

static void	ft_putunbr(unsigned int n, int *t)
{
	if (n / 10 > 0)
		ft_putunbr(n / 10, t);
	write(1, &"0123456789"[n % 10], 1);
	*t += 1;
}

static void	ft_putnbr(int n, int *t)
{
	if (n == -2147483648)
	{
		*t += write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		*t += write(1, "-", 1);
	}
	if (n / 10 > 0)
		ft_putnbr(n / 10, t);
	*t += write(1, &"0123456789"[n % 10], 1);
}

void	from_int(int n, int *t)
{
	ft_putnbr(n, t);
}

void	from_uint(unsigned int n, int *t)
{
	ft_putunbr(n, t);
}
