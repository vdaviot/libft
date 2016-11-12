/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:46:56 by vdaviot           #+#    #+#             */
/*   Updated: 2015/01/10 23:52:00 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;

	i = 0;
	if ((!(char)s1) || (!(char)s2) || ((int)n == 0))
		return (0);
	while ((i < (int)n - 1) || (i == 0))
	{
		if (((char)s1[i]) == ((char)s2[i]))
			i++;
		else
			return (((char)s2[0]) ? ((char)s1[i]) - ((char)s2[i]) : 200);
	}
	return (0);
}
