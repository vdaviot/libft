/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hextodec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 21:40:41 by vdaviot           #+#    #+#             */
/*   Updated: 2016/04/25 19:00:54 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_hextodec(char *str)
{
	char	*ptr;
	int		e;
	int		dec;

	dec = 0;
	e = 0;
	ptr = str + ft_strlen(str) - 1;
	while (*ptr)
	{
		if (*ptr >= '0' && *ptr <= '9')
			dec += (*ptr - '0') * ft_pow(16, e);
		else if ((*ptr >= 'A' && *ptr <= 'F'))
			dec += (*ptr - 'A' + 10) * ft_pow(16, e);
		else if ((*ptr >= 'a' && *ptr <= 'f'))
			dec += (*ptr - 'a' + 10) * ft_pow(16, e);
		ptr--;
		e++;
	}
	return (dec);
}
