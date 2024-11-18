/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_formats.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:15:07 by pjarnac           #+#    #+#             */
/*   Updated: 2024/11/18 17:06:37 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*from_char(char c)
{
	char	*res;

	res = ft_calloc(2, sizeof (char));
	if (!res)
		return (0);
	res[0] = c;
	return (res);
}
