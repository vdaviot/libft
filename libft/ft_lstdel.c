/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 20:35:19 by vdaviot           #+#    #+#             */
/*   Updated: 2016/01/14 07:03:31 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **lst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*later;

	if (lst && del)
	{
		tmp = *lst;
		while (tmp)
		{
			later = tmp->next;
			(*del)(tmp->content, tmp->content_size);
			tmp = later;
		}
		free(*lst);
		*lst = NULL;
	}
}
