/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 00:53:28 by vdaviot           #+#    #+#             */
/*   Updated: 2016/01/11 01:25:05 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countc(char *str, char c)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = str;
	while (*ptr++)
		if (*ptr == c)
			count++;
	return (count);
}
