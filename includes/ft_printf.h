#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <wchar.h>
# include <limits.h>
# define BUFF_SIZE 4096

typedef struct	s_option
{
	int			h;
	int			hh;
	int			l;
	int			ll;
	int			j;
	int			z;
	int			nomod;
}				t_option;

typedef	struct	s_flags
{
	int			plus;
	int			neg;
	int			hash;
	int			zero;
	int			space;
	int			width;
	int			press;
}				t_flags;

typedef	struct	s_env
{
	char		buff[BUFF_SIZE];
	int			i;
	int			j;
	va_list		ap;
	t_flags		flags;
	t_option	opt;
	char		*out;
	long 		tmp;
	int			ret;
	int			len;
}				t_env;

/*
**				ft_printf
*/
int		ft_printf(const char *format, ...);
/*
**				ft_parse
*/
void	ft_option(const char *format, t_env *op);
void	ft_initflag(t_flags flags);
void	ft_height(const char *format, t_env *op);
void	ft_initoption(t_option *opt);
void	ft_get_spec(const char *format, t_env *op);
/*
**				ft_get_spec
*/
void	ft_spec_char(t_env *op, char type);
int  ft_spec_int(t_env *op);
void	ft_spec_unsint(t_env *op, char type);
void	ft_spec_wchar(t_env *op, char type);
void	ft_spec_percent(t_env *op);
int	ft_spec_ptraddr(t_env *op, char type);
void	ft_spec_base(t_env *op, char type);
/*
**				ft_print_str
*/
void	ft_print_null_str(t_env *op);
void	ft_print_str(t_env *op);
void	ft_print_width(t_env *op);
/*
**				ft_print_char
*/
void	ft_print_char(t_env *op, char c);
void	ft_print_null_char(t_env *op);
void	ft_print_char_width(t_env *op);
/*
**				ft_print_int
*/
void	ft_print_digit(t_env *op);
void	ft_check_digit_prec(t_env *op);
void	ft_check_digit_sign(t_env *op);
void	ft_print_digit_width(t_env *op);
void	ft_print_digit_sign(t_env *op);
/*
**				wchar_c
*/
void	ft_print_wchar(t_env *op, wchar_t ws);
void	ft_print_wchar_minus(t_env *op, wchar_t ws);
void	ft_put_wc(t_env *op, wchar_t c);
void	ft_put_wchar(t_env *op, char c);
/*
**				wchar_str
*/
void	ft_print_wstr(t_env *op, wchar_t *wc);
void	ft_print_wstr_minus(t_env *op, wchar_t *wc);
int		ft_get_wstr_len(wchar_t *wc);
void	ft_put_wstr_c(t_env *op, char c);
/*
**				print_base
*/
void	ft_print_base_pre(t_env *op, char type, long val);
void	ft_print_base_width(t_env *op, char type);
void  ft_print_base(t_env *op, char type, long val);
void	ft_check_base_prec(t_env *op, char type);
/*
**				print_ptr
*/
void	ft_print_ptraddr(t_env *op, char type);
void	ft_print_ptraddr_width(t_env *op);
void	ft_ptraddr_prec(t_env *op);
/*
**				print_invalid_spec
*/
void	ft_print_invalid_spec(t_env *op, char c);
void	ft_print_invalid_width(t_env *op);
/*
**				tools
*/
char	*ft_uitoa(unsigned int n);
char	*ft_ultoa(unsigned long n);
char	*ft_ltoa(long n);
char	*ft_itoa(int n);
char	*ft_ulltoa(long long n);
char	*ft_ultoa_base(unsigned long n, int base);
char	*ft_uitoa_base(unsigned int n, int base);
char	*ft_ltoa_base(long n, int base);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *s);
void	*ft_memset(void *s, int c, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strchr(const char *s, int c);
int		ft_isdigit(int c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_strlower(char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
void	ft_putendl(char const *s);
void	ft_putstr(char const *s);
void	ft_putchar(char c);




void			ft_write_chars(char *string, int base, char conversion[base], uintmax_t number);
int			ft_count_digits(uintmax_t number, int base);
void			ft_set_conversion_array(char *array, int base);
#endif
