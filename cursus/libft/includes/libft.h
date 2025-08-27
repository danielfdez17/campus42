#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}	t_list;

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	ft_putchar(char c);
void	ft_putstr(char const *c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);

# endif