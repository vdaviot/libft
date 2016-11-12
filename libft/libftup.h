/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftup.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:35:33 by vdaviot           #+#    #+#             */
/*   Updated: 2016/11/10 21:35:35 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
# define _LIBFT_H_

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>
# include <mlx.h>
# include <fcntl.h>
# include <math.h>
# include <time.h>
# include <pthread.h>

# define ALIAS(name, type) typeof(type) name = type;
# define __ASM1__ __asm__ volatile("movq %0, %%rax" : "=r" ((long[1]){0}));
# define GET_LAST_FUNCTION_RESULT *(long *)((long[1]){0} + 1)
# define typename(x) _Generic((x),        /* Get the name of a type */             \
                                                                                  \
        _Bool: "_Bool",                  unsigned char: "unsigned char",          \
         char: "char",                     signed char: "signed char",            \
    short int: "short int",         unsigned short int: "unsigned short int",     \
          int: "int",                     unsigned int: "unsigned int",           \
     long int: "long int",           unsigned long int: "unsigned long int",      \
long long int: "long long int", unsigned long long int: "unsigned long long int", \
        float: "float",                         double: "double",                 \
  long double: "long double",                   char *: "charptr", 			      \
       void *: "pointer to void",                int *: "intptr", 			      \
      default: "other")

typedef	struct	s_list
{
	void		*data;
	t_list		*next;
}				t_list;

/*
	Type conversion functions
*/

double			ft_atod(char *str);
int				ft_atoi(char const *str);
char			*ft_itoa(int n);
int				ft_hextodec(char *str);
int				ft_octtodec(char *str);

/*
	Type looking functions
*/

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isspace(char c);
int				ft_isdigit(int c);
int				ft_ishexa(int c);
int				ft_isocta(int c);
int				ft_isprint(int c);

/*
	Memory functions
*/

void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);

/*
	Display functions
*/

void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(char const *str);
void		ft_putstr_cr(char *color, char *str);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_cr(char *color, char *str);
void		ft_putendl_db(char *target, char *result);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
void		ft_puttab(char **tab);

/*
	Function pointers
*/

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strmap(char const *s, char (*f)(char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_striter(char *s, void (*f)(char *));

/*
	ft_scanf dedicated
*/

int			ft_sscanf(char *format, char *str, ...);
void		skip_space(char **format, char **str);
int			skip_string(char **format, char **str);
int			convert_float(char **format, char **str, float *f);
int			convert_int(char **format, char **str, int *i);
int			convert_str(char **format, char **str, char *ptr);

/*
	Array manipulation
*/

char		**ft_arrcpy(char **arr);
void		ft_arrfree(char ***arr);

/*
	String manipulation
*/

void		ft_bzero(void *s, size_t n);
char		*ft_replace_char(char *s, int find, int replace);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strlchr(const char *s, int c, size_t size);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strcjoin(char *s1, char *s2, char c);
void		ft_strclr(char *s);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t n);
int			ft_strlcpy(char *dst, const char *src, size_t size);
void		ft_strdel(char **as);
char		*ft_strdup(const char *s1);
char		*ft_strdupcign(const char *src, char c)
char		*ft_strdupc(const char *src, char c);
void		ft_swapstr(char **str, char **str2);
char		*ft_strtrim(char const *s);
char		*ft_strsupertrim(char *str);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strremovechars(char *str, char c);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*ft_strnew(size_t size);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
int			ft_strequ(char const *s1, char const *s2);


/*
	Char Manipulation
*/

int			ft_toupper(int c);
int			ft_tolower(int c);


/*
	List manipulation functions
*/

t_list		*ft_lst_addbeg(t_list *old, void *data);
t_list		*ft_lst_new(void const *content, size_t content_size);
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list*));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void		ft_lstdelone(t_list **lst, void (*del)(void *, size_t));
void		ft_lstdel(t_list **lst, void (*del)(void *, size_t));
void		ft_lstadd(t_list **lst, t_list *new);
t_list		*ft_lst_remove_first(t_list *lst);
t_list		*ft_lst_remove(t_list *lst);
t_list		*ft_lst_create(void *data);
t_list		*ft_lst_addend(t_list *list, void *data);

/*
	Various len functions
*/

int			ft_arrlen(char **arr);
int			ft_lst_len(t_list *lst);
int			ft_countc(char *str, char c);
size_t		ft_strlen(const char *s);
size_t		ft_strlencign(const char *str, char c);
size_t		ft_strlenc(const char *str, char c);

/*
	Math lib functions
*/

int			ft_pow(int nb, int pow);
size_t		ft_abs(int n);

/*
	Allocation functions
*/

char		**ft_dblstrnew(size_t len);

/*
	Others
*/

int			gl(char *dst, int *fd);
void		ft_exit(char *str);

#endif