/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:22:43 by vdaviot           #+#    #+#             */
/*   Updated: 2014/11/15 19:17:30 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*a;
	const char	*b;

	b = src;
	a = dst;
	while (n--)
	{
		*a++ = *b++;
		if (*b == c)
			return (a);
	}
	return (NULL);
}
