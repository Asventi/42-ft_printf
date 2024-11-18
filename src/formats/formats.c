/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:00:59 by pjarnac           #+#    #+#             */
/*   Updated: 2024/11/18 17:09:08 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formats.h"
#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

static bool	is_flag(char c, char *flags)
{
	while (*flags)
	{
		if (c == *flags)
			return (true);
		flags++;
	}
	return (false);
}

static char	*apply_format(char t, va_list *args)
{
	if (t == 'd' || t == 'i')
		return (from_int(va_arg(*args, int)));
	else if (t == 'c')
		return (from_char(va_arg(*args, int)));
	return (0);
}

char	*process_format(char **idx, va_list *args)
{
	int		i;
	// Flags : type -> Hash -> space -> plus
	char	type;
	char	*res;

	type = 0;
	i = -1;
	if (is_flag(**idx, "cspdiuxX%"))
	{
		type = **idx;
		res = apply_format(type, args);
		if (!res)
			return (0);
		*idx = *idx + 1;
		return (res);
	}
	else
	{
		if (**idx == '\0')
			res = ft_strdup("");
		else
			res = ft_strdup("%");
	}
	return (res);
}
