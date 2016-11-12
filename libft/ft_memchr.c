/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:31:16 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/27 18:23:53 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	while (i++ < c)
		if (str + i == (unsigned char)c)
			return (&str + i);
	return (NULL);
}
