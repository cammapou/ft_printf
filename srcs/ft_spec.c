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

/*void	ft_spec_ptraddr(t_env *op, char type)
  {
  long			tmp;
  unsigned long	addr;

  tmp = va_arg(op->ap, long);
  addr = (unsigned long)tmp;
  if (op->flags.press == 0)
  op->out = ft_strdup("\0");
  else
  op->out = ft_ltoa_base(addr, 16);
  ft_print_ptraddr(e, type);
  }*/
