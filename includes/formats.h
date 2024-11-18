/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:47:33 by pjarnac           #+#    #+#             */
/*   Updated: 2024/11/18 17:06:55 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMATS_H
# define FORMATS_H

# include <stdbool.h>
# include <stdarg.h>

char	*process_format(char **idx, va_list *args);
char	*from_int(int n);
char	*from_char(char c);

#endif
