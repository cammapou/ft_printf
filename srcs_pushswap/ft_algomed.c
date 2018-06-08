/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomed.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/06 19:27:58 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"




void ft_med_quick(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int med2;

		if (ft_stack_de(*lst_a) == 0 && ev->len_a == 5)
			ft_lstrev(lst_a);
		while (1)
		{
			ev->len_a = ft_stack_len_a(*lst_a);
			//med2 = ft_min_value(*lst_a) + ((ft_max_value(*lst_a) - ft_min_value(*lst_a)) / 2);
			//printf("med =%d\n", ev->med);
			while (ft_check_val(*lst_a, ev->med) == -1)
			{
				if (ev->len_a == 3)
					break ;
				if (*(int*)(*lst_a)->content < ev->med)
				{
					ft_pb(lst_a, lst_b);
					ft_printf("pb\n");
					ft_print_lst_a(*lst_a);
				   ft_print_lst_b(*lst_b);
				}
				else
				{
					ft_ra(lst_a);
					ft_printf("ra\n");
					
				}
			}
			//ft_algo_cut(ev, lst_a, lst_b);
			if (ev->len_a == 3)
				ft_algomin(lst_a);
			ev->med++;
			if (ev->len_a == 2 || ft_check_stack(*lst_a) == 0)
				break ;
		}
		ft_small_pa(ev, lst_a, lst_b);
}
