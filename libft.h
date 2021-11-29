#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
void *ft_calloc(size_t	count, size_t	size);
int	isalnum(int	c);
int	isalpha(int	c);
int	isascii(int	c);
int	isdigit(int	c);
int	isprint(int	c);
void    *ft_memchr(const void	*s, int	c, size_t	n);
int	ft_memcmp(const void	*s1, const void	*s2, size_t	n);
void * ft_memcpy(void* dst, const void* src, unsigned int cnt);
void	*ft_memset(void *b, int	c, size_t	len);
char	*ft_strchr(const char	*s, int	c);
size_t  ft_strlen(const char   *s);size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlen(const char	*s);
int	strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char	*s, int	c);
size_t  ft_strlen(const char    *s);
char	*ft_substr(char const	*s, unsigned int	start, size_t	len);
int	tolower(int	c);
int	toupper(int	c);

#endif