/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove_first.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 17:36:49 by vdaviot           #+#    #+#             */
/*   Updated: 2014/12/05 17:36:50 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lst_remove_first(t_list *lst)
{
	t_list		*first;

	first = lst;
	lst = lst->next;
	free (first);
	return (lst);
}
