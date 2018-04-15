#include "ft_printf.h"

void	ft_print_digit_width_u(t_env *op)
{
	int		len;

	len = (int)ft_strlen(op->out);

	if (op->flags.width && op->flags.neg == 0 && op->flags.plus == 0
		&& op->flags.press == 0 && op->flags.zero == 0)
		while (--op->flags.width >= len)
			op->ret += write(1, " ", 1);
	else if (op->flags.neg && op->flags.plus == 0)
		while (op->flags.width > op->flags.press && op->flags.width-- > len)
			op->ret += (op->flags.zero == 1 ? write(1, "0", 1) : write(1, " ", 1));
	while (op->flags.width-- > op->flags.press && op->flags.width > len)
		op->ret += (op->flags.zero == 1 ? write(1, "0", 1) : write(1, " ", 1));
	while (op->flags.width <= op->flags.press && --op->flags.press >= len)
		op->ret += (op->flags.press > 0 ? write(1, "0", 1) : write(1, " ", 1));
}

void	ft_check_digit_prec_u(t_env *op)
{
	char	*tmp;
	char	*res;
	int		len;
	int		i;

	len = (int)ft_strlen(op->out);
	if (op->flags.press == 0 && op->out[0] == '0')
		op->out[0] = '\0';
	if (op->flags.press > len)
	{
		i = op->flags.press - len;
		tmp = ft_strnew(i);
		while (i-- > 0)
			tmp[i] = '0';
		res = ft_strjoin(tmp, op->out);
		free(tmp);
		free(op->out);
		op->out = res;
	}
}

void	ft_print_digit_u(t_env *op)
{

	if (op->flags.zero || op->flags.plus)
	{
		ft_check_digit_prec(op);
		ft_print_digit_width(op);
		op->ret += write(1, op->out, ft_strlen(op->out));
	}
	else
	{
		ft_print_digit_width(op);
		op->ret += write(1, op->out, ft_strlen(op->out));
	}
	++op->i;
	free(op->out);
}
