/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblstrnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 03:00:19 by vdaviot           #+#    #+#             */
/*   Updated: 2016/08/22 16:20:54 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_dblstrnew(size_t len)
{
	char	**ret;
	char	**tmp;

	if ((ret = (char**)malloc(sizeof(char*) * (len + 1))) == NULL)
		return (NULL);
	tmp = ret;
	while (len--)
		*tmp++ = NULL;
	return (ret);
}
