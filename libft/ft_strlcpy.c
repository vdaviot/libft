/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:32:15 by vdaviot           #+#    #+#             */
/*   Updated: 2016/11/12 17:32:16 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*ptr;
	const char 	*ptr2;
	size_t		s;

	s = size;
	ptr = dst;
	ptr2 = src;
	if (s != 0 && --s != 0)
		while (--s != 0)
			if ((*ptr++ = *ptr2++) == 0)
				break ;
	if (s == 0)
	{
		if (size != 0)
			*ptr = '\0';
		while (*ptr2++);
	}
	return (ptr2 - src - 1);
}
