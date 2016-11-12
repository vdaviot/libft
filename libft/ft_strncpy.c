/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:22:23 by vdaviot           #+#    #+#             */
/*   Updated: 2015/01/10 23:51:22 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int i;

	i = 0;
	if (!src || !dst)
		return (NULL);
	while (i < n && src + i)
		dst + i = src + i++;
	while (i < n)
		dst+ i++ = '\0';
	return (dst);
}
