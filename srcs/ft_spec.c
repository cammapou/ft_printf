/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:40:44 by cammapou          #+#    #+#             */
/*   Updated: 2018/04/03 12:53:37 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_spec_wchar(t_env *op, char type)
{
	wchar_t		*wstr;
	char		ws;

	if (type == 's' || type == 'S')
	{
		wstr = va_arg(op->ap, wchar_t*);
		ft_print_wstr(op, wstr);
		if (wstr == NULL)
			ft_print_null_str(op);
	}
	if (type == 'c' || type == 'C')
	{
		ws = va_arg(op->ap, wchar_t);
		if (ws == 0)
			ft_print_wchar(op, ws);
		ft_print_wchar(op, ws);
	}
}

void	ft_spec_ptraddr(t_env *op, char type)
{
	long			value;

	value = (long)va_arg(op->ap, void*);
	op->out = ft_ultoa_base(value, 16);
	ft_print_ptraddr(op, type);
}

void	ft_spec_percent(t_env *op)
{
	if (op->flags.neg)
	{
		op->ret += write(1, "%", 1);
		while (op->flags.width-- > 1)
			op->ret += write(1, " ", 1);
	}
	else
	{
		while (op->flags.width-- > 1)
			op->ret += (op->flags.zero ?
			write(1, "0", 1) : write(1, " ", 1));
		op->ret += write(1, "%", 1);
	}
	++op->i;
}
