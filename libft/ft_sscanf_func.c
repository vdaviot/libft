/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sscanf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:39:34 by vdaviot           #+#    #+#             */
/*   Updated: 2016/11/10 21:39:36 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_space(char **format, char **str)
{
	(*format) += 2;
	while (ft_isspace(**str))
		(void)(*str)++;
}

int		skip_string(char **format, char **str)
{
	while (**format != '\\' && **format != '%')
	{
		if (**format != **str)
			return (0);
		else
			(void)((long)(*str)++ + (long)++(*format));
	}
	return (1);
}

int		convert_float(char **format, char **str, float *f)
{
	if (!(ft_isdigit(**str) || **str == '-'))
		return (0);
	*f = (float)ft_atod(*str);
	while (ft_isdigit(**str) || **str == '.' || **str == 'f' || **str == '-' || **str == '+')
		(void)(*str)++;
	(*format) += 2;
	return (1);
}

int		convert_int(char **format, char **str, int *i)
{
	if (!(ft_isdigit(**str)))
		return (0);
	*i = ft_atoi(*str);
	while (ft_isdigit(**str) || **str == '-')
		(void)(*str)++;
	(*format) += 2;
	return (1);
}

int		convert_str(char **format, char **str, char *ptr)
{
	if (!(ft_isascii(**str) || **str == ' '))
		return (0);
	ft_strcpy(ptr, *str);
	while ((ft_isalpha(**str) || **str == '_' || **str == '.' || ft_isdigit(**str) || **str == '-'))
		(void)(*str)++;
	(*format) += 2;
	return (1);
}
