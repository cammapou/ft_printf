/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_spec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:25:56 by cammapou          #+#    #+#             */
/*   Updated: 2018/04/10 11:32:38 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_spec_base(t_env *op, char type)
{
	long			tmp;
	unsigned long	val;

	val = 0;
	tmp = va_arg(op->ap, long);
	//printf("hash=%d\n", op->flags.hash);
	//printf("zero=%d\n", op->flags.zero);
	/*if (tmp == 0 && op->flags.hash == 1)
	{
		write(1, "\0", 1);
		op->i++;
		return ;
	}*/
	if (op->opt.hh == 1)
		val = (unsigned short)tmp;
	else if (type == 'O' || op->opt.z == 1 || op->opt.ll == 1 ||
			op->opt.j == 1 || op->opt.l == 1)
		val = (unsigned long)tmp;
	else if (op->opt.h == 1)
		val = (unsigned short)tmp;
	else if (op->opt.l == 0 || op->opt.j == 0 || op->opt.ll == 0 ||
			op->opt.z == 0 || op->opt.h == 0 || op->opt.hh == 0)
		val = (unsigned int)tmp;
	(type == 'b' || type == 'B') ? op->out = ft_ultoa_base(val, 2) : 0;
	(type == 'o' || type == 'O') ? op->out = ft_ultoa_base(val, 8) : 0;
	(type == 'x' || type == 'X') ? op->out = ft_ultoa_base(val, 16) : 0;
	if (type == 'b' || type == 'o' || type == 'x')
		ft_strlower(op->out);
	op->flags.neg == 1 ? op->flags.zero = 0 : 0;
	ft_print_base(op, type, (long)val);
}

void	ft_spec_unsint(t_env *op, char type)
{
	long	tmp;
	//op->opt.hh == 1 ? op->opt.h = 0 : 0;
	tmp = (long long)va_arg(op->ap, long);
	if (tmp == 0)
	{
		op->ret += write(1, "0", 1);
		op->i++;
		return ;
	}
	if (tmp == LLONG_MIN || tmp == LONG_MIN)
	{
		op->out = ft_strdup("-9223372036854775808");
		op->ret += write(1, op->out, ft_strlen(op->out));
		op->i++;
		return ;
	}
	else if (op->opt.z == 1 && type == 'd')
		op->out = ft_ltoa(tmp);
	else if (op->opt.z == 1 || op->opt.l == 1 || op->opt.j == 1)
		op->out = ft_ultoa((unsigned long)tmp);
	else if (op->opt.ll == 1)
		op->out = ft_ultoa((unsigned long long)tmp);
	else if (op->opt.h == 1)
		op->out = ft_ultoa((unsigned long)tmp);
	else if (op->opt.hh == 1)
		op->out = ft_ultoa((unsigned char)tmp);
	else if (type == 'U')
		op->out =ft_ultoa((unsigned long)tmp);
	else if ((op->opt.l == 0 || op->opt.j == 0 || op->opt.ll == 0 ||
		op->opt.z == 0 || op->opt.h == 0 || op->opt.hh == 0) && type != 'U')
		op->out = ft_ulltoa((unsigned int)tmp);
	ft_print_digit_u(op);

}

void	ft_spec_char(t_env *op, char type)
{
	char	*stmp;
	int		ctmp;
	int		len;

	len = 0;
	if (type == 's')
	{
		stmp = va_arg(op->ap, char *);
		if (stmp == NULL)
			return (ft_print_null_str(op));
		op->out = ft_strdup((char*)stmp);
		ft_print_str(op);
	}
	else if (type == 'c')
	{
		ctmp = va_arg(op->ap, int);
		ft_print_char(op, ctmp);
	}
}

void	ft_spec_int(t_env *op)
{
	long	tmp;
	long	i;
	int		len;

	len = 0;
	//printf("%s\n", op->out);
	tmp = (long)va_arg(op->ap, long);
	i = (long long)tmp;

	if (tmp == 0 && op->flags.press <= 0)
	{
		if (op->flags.plus == 1)
			op->ret += write(1, "+", 1);
		op->ret += write(1, "0", 1);
		op->i++;
		return ;
	}
	if (tmp == LLONG_MIN || tmp == LONG_MIN)
	{
		op->out = ft_strdup("-9223372036854775808");
		op->ret += write(1, op->out, ft_strlen(op->out));
		op->i++;
		return ;
	}
	else if (op->opt.hh == 1)
		op->out = ft_itoa((char)i);
	else if (op->opt.h == 1)
		op->out = ft_itoa((short)i);
	else if (op->opt.l == 1 || op->opt.j == 1 || op->opt.ll == 1)
		op->out = ft_ulltoa((long)i);
	else
		op->out = ft_itoa((int)i);
		ft_print_digit(op);
}
