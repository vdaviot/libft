/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 17:52:34 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/05 17:52:35 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_create(void *data)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(lst));
	if (!lst)
		return (NULL);
	if (lst)
	{
		lst->data = data;
		lst->next = NULL;
	}
	return (lst);
}
