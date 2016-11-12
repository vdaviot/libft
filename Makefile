# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 21:28:43 by vdaviot           #+#    #+#              #
#    Updated: 2016/11/10 21:28:44 by vdaviot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang
CFLAGS = -Werror -Wall -Wextra -o3
CPATH = src/
CFILES = \
		ft_atod.c	\
		ft_trimnm.c		\
		ft_isblank.c	\
		ft_sscanf.c		\
		get_line.c		\
		ft_arrfree.c	\
		
MAKEFILE = Makefile
OPATH = obj/
OFILES = $(CFILES:.c=.o)

OBJ = $(addprefix $(OPATH), $(OFILES))

.PHONY: all clean fclean re f

$(NAME): all

all: $(OFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

%.o: %.c ../inc/libft.h
	$(CC) $(CFLAGS) $< -c -I ../inc/ -o $@

clean:
	rm -rf $(OFILES)
fclean: clean
	rm -rf $(NAME)

re: fclean all
