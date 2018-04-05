#include "ft_printf.h"

char				*ft_get_string_pointer(t_env *op)
{
	char			*before;
	char			*string;
	long			value;

	value = (long)va_arg(op->ap, void*);
	if (value == 0)
		return (ft_strdup("0x0"));
	before = ft_basetoa(value, 16);
	ft_strlower(before);
	string = ft_strjoin("0x", before);
	op->ret += write(1, string, ft_strlen(before));
	free(before);
	return (string);
}
