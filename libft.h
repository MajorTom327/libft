/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vthomas <vthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 21:35:36 by vthomas           #+#    #+#             */
/*   Updated: 2017/05/16 19:46:35 by vthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BUFF_SIZE 100

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);

int				ft_abs(int nb);
int				ft_pow(int nb, int pow);
int				ft_tpow(int nb);

void			*ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t t);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_memswitch(void *src, void *dst, size_t l);

void			ft_putchar(char c);
void			ft_putstr(char const *c);
void			ft_putendl(char const *c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *c, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr_endl(int nb);
void			ft_putnbr_desc(const char *desc, int nb);
void			ft_print_mem(unsigned char * mem, size_t len);

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

float			ft_atof(char *str);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);

char			*ft_strnew(size_t t);
void			ft_strdel(char **as);
void			ft_strtabdel(char **str);
void			ft_strclr(char *s);

size_t			ft_strlen(char const *s);
char			*ft_strlower(char *str);
char			*ft_strdup(const char *s1);

char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_freejoin(char *dst, char *src);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strcat(char *s1, const char *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strncat(char *s1, const char *s2, size_t n);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

void			print_log(char *str);
void			print_warning(char *str);
void			print_error(char *str);
void			print_info(char *str);

int				get_next_line(const int fd, char **line);


#endif
