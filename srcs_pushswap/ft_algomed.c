/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomed.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/05/17 17:12:18 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void ft_algo_cut(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int med;
	int lenb;
	int min;

	while (1)
	{
		lenb = ft_stack_len_b(*lst_b);
		//min = ft_min_value(*lst_b);
		while (ft_check_val(*lst_b, med) != 0)
		{
			if (*(int*)(*lst_b)->content > med)
			{
				ft_pa(lst_a, lst_b);
			}
			else
				ft_rb(lst_b);
		}
		med++;
		//med = ft_min_value(*lst_a) + ((ft_max_value(*lst_a) - ft_min_value(*lst_a)) / 2);
		if (lenb == 2 || med < min)
		{
			break ;
		}
	}
}

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
