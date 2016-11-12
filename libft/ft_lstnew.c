/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 14:30:13 by vdaviot           #+#    #+#             */
/*   Updated: 2015/01/10 23:54:05 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_new(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (!tmp = (t_list *)malloc(sizeof(t_list)))
		return (NULL);
	if (!content)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	else
	{
		if (!tmp->content = ft_memalloc(sizeof(content)))
			return (NULL);
		ft_memcpy(tmp->content, content, sizeof(content));
		tmp->content_size = content_size;
	}
	tmp->next = NULL;
	return (tmp);
}
