/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:26:52 by cammapou          #+#    #+#             */
/*   Updated: 2018/04/10 11:26:54 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_initoption(t_option *opt)
{
	ft_bzero(&opt, sizeof(opt));
	if (!(opt = (t_option*)malloc(sizeof(t_option))))
		return ;
	opt->h = 0;
	opt->hh = 0;
	opt->l = 0;
	opt->ll = 0;
	opt->j = 0;
	opt->z = 0;
}

void	ft_height(const char *fmt, t_env *op)
{
	ft_initoption(&op->opt);
	if (fmt[op->i] == 'h' && fmt[op->i + 1] != 'h')
		op->opt.h = 1;
	else if (fmt[op->i] == 'h' && fmt[op->i + 1] == 'h')
	{
		op->opt.hh = 1;
		op->i++;
	}
	else if (fmt[op->i] == 'l' && fmt[op->i + 1] != 'l')
		op->opt.l = 1;
	else if (fmt[op->i] == 'l' && fmt[op->i + 1] == 'l')
	{
		op->opt.ll = 1;
		op->i++;
	}
	else if (fmt[op->i] == 'j')
		op->opt.j = 1;
	else if (fmt[op->i] == 'z')
		op->opt.z = 1;
}

void	ft_initflag(t_flags *flags)
{
	if (!(flags = (t_flags*)malloc(sizeof(t_flags))))
		return ;
	flags->neg = 0;
	flags->plus = 0;
	flags->hash = 0;
	flags->zero = 0;
	flags->space = 0;
	flags->width = 0;
	flags->press = -1;
	ft_bzero(flags, sizeof(flags));
}

void	ft_option(const char *fmt, t_env *op)
{
	ft_initflag(&op->flags);
	if (ft_strchr(" #+-0hjlz.123456789", fmt[op->i]))
	{
		while (ft_strchr(" #+-0hjlz", fmt[op->i]))
		{
			fmt[op->i] >= 'h' && fmt[op->i] <= 'z' ? ft_height(fmt, op) : 0;
			fmt[op->i] == '+' ? op->flags.plus = 1 : 0;
			fmt[op->i] == '-' ? op->flags.neg = 1 : 0;
			fmt[op->i] == '#' ? op->flags.hash = 1 : 0;
			fmt[op->i] == ' ' ? op->flags.space = 1 : 0;
			fmt[op->i] == '0' ? op->flags.zero = 1 : 0;
			op->i++;
		}
		while (ft_isdigit(fmt[op->i]))
			op->flags.width = (op->flags.width * 10) + fmt[op->i++] - 48;
		if (fmt[op->i] == '.')
			while (ft_isdigit(fmt[++op->i]))
				op->flags.press = (op->flags.press * 10) + fmt[op->i] - 48;
		else if (ft_strchr(" #+-0hjlz.123456789", fmt[op->i]))
			return (ft_option(fmt, op));
	}
}

void	ft_get_spec(const char *fmt, t_env *op)
{
	//printf("ici");
	if (fmt[op->i] == '%' || !fmt[op->i])
		ft_spec_percent(op);
	else if ((fmt[op->i] == 's' || fmt[op->i] == 'c') && op->opt.l == 0)
		ft_spec_char(op, fmt[op->i]);
	else if ((fmt[op->i] == 'd' || fmt[op->i] == 'i') && op->opt.z == 0)
	{
		//printf("ici0\n");
		ft_spec_int(op);
	}
	else if (((fmt[op->i] == 'd' || fmt[op->i] == 'i') && op->opt.z == 1)
		|| fmt[op->i] == 'D' || fmt[op->i] == 'U' || fmt[op->i] == 'u')
	{
		//printf("ici1\n");
		ft_spec_unsint(op, fmt[op->i]);
	}
	else if (((fmt[op->i] == 's' || fmt[op->i] == 'c') && op->opt.l == 1)
			|| fmt[op->i] == 'C' || fmt[op->i] == 'S')
		ft_spec_wchar(op, fmt[op->i]);
	else if (fmt[op->i] == 'p' || fmt[op->i] == 'P')
		ft_spec_ptraddr(op, fmt[op->i]);
	else if (ft_strchr("boxBOX", fmt[op->i]))
	{
		//printf("ici2\n");
		ft_spec_base(op, fmt[op->i]);
	}
	/*else if (fmt[op->i] != '\0')
	{
		//printf("ici2\n");
		op->ret += write(1, "\0", 2);
	}*/
	//else
		//op->ret += write(1, "\0", 2);
}
