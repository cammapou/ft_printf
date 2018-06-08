/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:42:55 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/08 17:37:12 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int ac, char **av)
{
	t_list	*lst_a;
	t_list	*lst_b;
	t_ev 		*ev;

	lst_b = NULL;
	//lst_a = NULL;
	if (!(ev = ft_memalloc(sizeof(t_ev))))
		return (-1);
	ft_bzero(ev, sizeof(ev));
	if ((ft_error_check(ac, av)) == -1)
	{
		ft_putendl_fd("Error", 2);
		return(-1);
	}
	ft_check_flags(ev, av);
	if (ft_init_pile(&lst_a, ac, av) == 0)
		return(-1);
	//ft_print_lst_a(lst_a);

	ft_pushswap(ev, &lst_a, &lst_b);
	ft_print_lst_a(lst_a);
	ft_print_lst_b(lst_b);
	ft_stack_clear(&lst_a);
	//free(lst_a);
	//free(lst_b);
//	free(ev);
	return (0);
}
