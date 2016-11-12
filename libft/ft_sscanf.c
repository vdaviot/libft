/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sscanf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 21:56:16 by vdaviot           #+#    #+#             */
/*   Updated: 2016/08/31 21:56:29 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_sscanf(char *format, char *str, ...)
{
	va_list	vargs;

	va_start(vargs, str);
	while (42)
	{
		if (*format == '\\' && format[1] == 's')
			skip_space(&format, &str);
		if (!*str)
			break ;
		if (*format == '%' && format[1] == 'f')
			if (!convert_float(&format, &str, va_arg(vargs, float *)))
				return (-1);
		if (*format == '%' && format[1] == 'd')
			if (!convert_int(&format, &str, va_arg(vargs, int *)))
				return (-1);
		if (*format == '%' && format[1] == 's')
			if (!convert_str(&format, &str, va_arg(vargs, char *)))
				return (-1);
		if (!skip_string(&format, &str))
			return (-1);
	}
	if (!*format)
		return (0);
	return (-1);
}
