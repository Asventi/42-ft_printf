/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_formats.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:06:13 by pjarnac           #+#    #+#             */
/*   Updated: 2024/11/18 16:16:57 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "formats.h"

char	*from_int(int n)
{
	char	*res;

	res = ft_itoa(n);
	if (!res)
		return (0);
	return (res);
}
