/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:47:33 by pjarnac           #+#    #+#             */
/*   Updated: 2024/11/25 10:56:16 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMATS_H
# define FORMATS_H

# include <stdbool.h>
# include <stdarg.h>

void	process_format(char **idx, va_list *args, int *total);
void	from_int(int n, int *t);
void	from_char(unsigned char c, int *t);
void	from_str(const char *str, int *t);
void	from_uint(unsigned int n, int *t);
void	from_lowhex(unsigned int n, int *t);
void	from_uphex(unsigned int n, int *t);
void	from_ptr(void *ptr, int *t);
void	from_percent(int *t);

#endif
