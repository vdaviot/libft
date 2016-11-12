/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 20:04:56 by vdaviot           #+#    #+#             */
/*   Updated: 2016/05/13 18:38:25 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <unistd.h>
#include "libft.h"
#include "../get_next_line.h"

static char	*ft_joinstr(char *s1, char *s2)
{
	char	*ret;
	size_t	slen1;
	size_t	slen2;

	ret = NULL;
	if (s1 && s2)
	{
		slen1 = ft_strlen(s1);
		slen2 = ft_strlen(s2);
		if ((ret = (char*)malloc(slen1 + slen2 + 1)) == NULL)
			return (NULL);
		ft_strcpy(ret, s1);
		ft_strcat(ret, s2);
		free((char*)s1);
	}
	return (ret);
}

static int	cut_gnl(int fd, char *temp, char **line, char *buf)
{
	int	ret;

	*line = ft_strdup(buf);
	while (!temp)
	{
		if ((ret = (read(fd, buf, 0xffff))) < 0)
			return (-1);
		if ((temp = ft_strchr(buf, '\n')) == NULL && !ret)
			return (0);
		else if (temp)
		{
			buf[ret] = ret ? 0 : buf[ret];
			temp[0] = 0;
			*line = ft_joinstr(*line, buf);
			ft_strcpy(buf, temp + 1);
		}
		else
		{
			buf[ret] = ret ? 0 : buf[ret];
			*line = ft_joinstr(*line, buf);
			buf[0] = 0;
		}
	}
	return (*line ? 1 : -1);
}

int			get_next_line(int const fd, char **line)
{
	static char buf[0xffff];
	int			ret;
	char		*temp;
	static int	i = 1;

	if (i == 1)
		buf[0] = 0;
	if (i == 1)
		i = 0;
	if (BUFF_SIZE < 1 || !line)
		return (-1);
	temp = ft_strchr(buf, '\n');
	if (temp)
	{
		temp[0] = 0;
		*line = ft_strdup(buf);
		ft_strcpy(buf, temp + 1);
		return (*line ? 1 : -1);
	}
	else
		ret = cut_gnl(fd, temp, line, buf);
	if (ret < 0)
		return (-1);
	else
		return (ret ? 1 : ft_strlen(*line) != 0);
}
