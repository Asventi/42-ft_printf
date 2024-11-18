/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:55:56 by pjarnac           #+#    #+#             */
/*   Updated: 2024/11/18 16:09:57 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "formats.h"
#include "libft.h"

static void	add_str(char **res, char *str)
{
	char	*temp;

	temp = ft_strdup(*res);
	free(*res);
	*res = ft_strjoin(temp, str);
	free(temp);
	free(str);
}


int	ft_printf(const char *s, ...)
{
	char	*res;
	char	*idx;
	va_list	args;
	int		i;

	idx = (char *)s;
	res = ft_calloc(1, 1);
	va_start(args, s);
	while (1)
	{
		i = idx - s;
		idx = ft_strchr(s + i, '%');
		if (!idx)
			break ;
		add_str(&res, ft_substr(s, i, (int)(idx - s) - i));
		idx++;
		add_str(&res, process_format(&idx, &args));
	}
	add_str(&res, ft_substr(s, i, ft_strlen(s + i)));
	write(1, res, ft_strlen(res));
	free(res);
	va_end(args);
	return (1);
}
