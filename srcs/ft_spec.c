/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:28:26 by cammapou          #+#    #+#             */
/*   Updated: 2018/04/10 11:28:28 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_spec_wchar(t_env *op, char type)
{
	wchar_t		*wstr;
	wchar_t		ws;

	if (type == 's' || type == 'S')
	{
		wstr = va_arg(op->ap, wchar_t*);
		if (wstr == NULL)
		{
			ft_print_null_str(op);
			return ;
		}
		ft_print_wstr(op, wstr);
	}
	if (type == 'c' || type == 'C')
	{

		ws = va_arg(op->ap, wchar_t);
		if (ws == 0)
		{
			write(1, "\0", 2);
		}
		ft_print_wchar(op, ws);
	}
}

int	ft_spec_ptraddr(t_env *op, char type)
{
	long			value;

	value = (long)va_arg(op->ap, void*);
	if (value == 0 && op->flags.press == 0)
	{
		op->ret += write(1, "0x", 2);
		op->i++;
		return(0);
	}
	op->out = ft_ultoa_base(value, 16);
	ft_print_ptraddr(op, type);
	return(0);
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
