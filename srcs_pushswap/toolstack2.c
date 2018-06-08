/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolstack2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/08 16:56:58 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


int	ft_check_val(t_list *lst_a, int nbr)
{
	int			*nbr_tmp;

	while (lst_a)
	{
		nbr_tmp = (int*)lst_a->content;
		if (*nbr_tmp < nbr)
			return (-1);
		lst_a = lst_a->next;
	}
	return (0);
}

int	ft_check_val2(t_list *lst_b, int nbr)
{
	int			*nbr_tmp;

	while (lst_b)
	{
		nbr_tmp = (int*)lst_b->content;
		if (*nbr_tmp > nbr)
			return (-1);
		lst_b = lst_b->next;
	}
	return (0);
}

int ft_check_med(t_list **lst_a)
{
	int min;
	int max;
	int len;
	int dif;
	int med;
	int med2;

	dif = 0;
	med	= 0;
	len	= ft_stack_len_a(*lst_a);
	max = ft_max_value(*lst_a);
	min = ft_min_value(*lst_a);
	//
	med = min + (max - min) / 8;
	med2 = min + (max - min) / 2;


	//med = max + (min - max) / 2;

	//dif = (med - min) / 2;
	//med = med - max;

	//dif = (max - med) / 2;
	//med = dif + med;
	//med = med / 2;

	return (med);



}
int ft_check_med2(t_list **lst_b)
{
	int min;
	int max;
	int len;
	int dif;
	int med;
	int med2;

	dif = 0;
	med	= 0;
	len	= ft_stack_len_a(*lst_b);
	max = ft_max_value(*lst_b);
	min = ft_min_value(*lst_b);
	//printf("max = %d\n", max);
	//printf("min =%d\n", min);
	//med = min + (max - min) / 4;
	med = min + (max - min) / 4;


	//med = max + (min - max) / 2;

	//dif = (med - min) / 2;
	//med = med - max;

	//dif = (max - med) / 2;
	//med = dif + med;
	//med = med / 2;

	return (med);



}

void	ft_stack_clear(t_list **begin_list)
{
	if (*begin_list != NULL)
	{
		ft_stack_clear(&((*begin_list)->next));
		free(*begin_list);
		*begin_list = NULL;
	}
}

int	ft_check_stack2(t_list *lst_b)
{
	int *j;
	int *i;
	t_list *tmp;

	tmp = lst_b;
		while (tmp->next)
		{
			i = tmp->content;
			j = tmp->next->content;
			if (*i < *j)
				return (-1);
			tmp = tmp->next;
		}
		return (0);
}
