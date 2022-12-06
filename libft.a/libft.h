#ifndef L_LIBFT
#define L_LIBFT

void ft_isalpha()
int ft_atoi(char *tab);
void *ft_memcpy(void *restrict dst, const void *restrict src, int n);
void	ft_bzero(void *str, int n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, int n);
int	isalnum(int c);
int	ft_isalpha(int c);
int	isascii(int c);
int	isdigit(int c);
void	isprint(int c);
void	*memset(void *str, int c, int len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_toupper(int c);
int     ft_tolower(int c);





#endif
