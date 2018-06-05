/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toolstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/05/17 17:12:18 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


int	ft_min_value(t_list *lst_a)
{
	t_list	*tmp;
	int			*min;

	if (!lst_a->content)
		return (0);
	min = lst_a->content;
	tmp = lst_a->next;

	while (tmp)
	{
		if (*min > *(int*)tmp->content)
			min = (int*)tmp->content;
		tmp = tmp->next;
	}
	return (*min);
}

int		ft_max_value(t_list *lst_a)
{
	int	max;

	max = 0;
	while (lst_a && lst_a->content)
	{
		if (((*(int*)lst_a->content) > max))
			max = (*(int*)lst_a->content);
		lst_a = lst_a->next;
	}
	return (max);
}

size_t ft_stack_len_b(t_list *lst_b)
{
	size_t len;

	len = 0;
	while(lst_b)
	{
		len++;
		lst_b = lst_b->next;
	}
	return (len);
	if (len == 0)
		return (0);
}

size_t ft_stack_len_a(t_list *lst_a)
{
	size_t len;

	len = 0;
	while(lst_a)
	{
		len++;
		lst_a = lst_a->next;
	}
	return (len);
	if (len == 0)
		return (0);
}


int	ft_stack_de(t_list *lst_a)
{
	int			*nbr_tmp;
	t_list	*tmpstack;

	tmpstack = lst_a;
	nbr_tmp = (int*)tmpstack->content;
	while (tmpstack->next)
	{
		if (*nbr_tmp < *(int*)tmpstack->next->content)
			return (-1);
		tmpstack = tmpstack->next;
		nbr_tmp = (int*)tmpstack->content;
	}
	return (0);
}
