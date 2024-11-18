/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:01:36 by pjarnac           #+#    #+#             */
/*   Updated: 2024/11/18 17:07:54 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "formats.h"
#include "ft_printf.h"

int	main(int c, char **args)
{
	unsigned int	test;

	test = 7;
	ft_printf(args[1], atoi(args[2]), atoi(args[3]));
}
