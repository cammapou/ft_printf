/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:33:08 by cammapou          #+#    #+#             */
/*   Updated: 2018/05/03 12:33:10 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Rotate a, décale d’une position vers le haut tous les élements de la pile a.
** Le premier élément devient le dernier.
*/

void	ft_ra(t_list **lst_a)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!*lst_a)
		return ;
 	if((*lst_a) && (*lst_a)->next)
	{
		tmp = (*lst_a);
		tmp1 = (*lst_a);
		(*lst_a) = (*lst_a)->next;
		while (tmp1->next)
			tmp1 = tmp1->next;
		tmp->next = NULL;
		tmp1->next = tmp;
	}
}

/*
** Rotate b, décale d’une position vers le haut tous les élements de la pile b.
** Le premier élément devient le dernier.
*/

void ft_rb(t_list **lst_b)
  {
		t_list	*tmp;
		t_list	*tmp1;

		if (!*lst_b)
			return ;
		if((*lst_b) && (*lst_b)->next)
		{
			tmp = (*lst_b);
			tmp1 = (*lst_b);
			(*lst_b) = (*lst_b)->next;
			while (tmp1->next)
				tmp1 = tmp1->next;
			tmp->next = NULL;
			tmp1->next = tmp;
		}
  }

void ft_rr(t_list **lst_a, t_list **lst_b)
  {
		if (!*lst_a && !*lst_b)
			return ;
		ft_ra(&(*lst_a));
		ft_rb(&(*lst_b));
  }

/*
** Reverse rotate a - décale d’une position vers le bas tous les élements de
** la pile a. Le dernier élément devient le premier.
*/

void ft_rra(t_list **lst_a)
{
	t_list *tmp1;
	t_list *tmp2;

	if ((*lst_a) && (*lst_a)->next)
	{
	tmp1 = (*lst_a);
	tmp2 = (*lst_a);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp1 = tmp2->next;
	tmp2->next = NULL;
	tmp1->next = (*lst_a);
	(*lst_a) = tmp1;
	}
}

/*
** Reverse rotate b - décale d’une position vers le bas tous les élements de
** la pile b. Le dernier élément devient le premier.
*/

void ft_rrb(t_list **lst_b)
{
	t_list *tmp1;
	t_list *tmp2;

	if ((*lst_b) && (*lst_b)->next)
	{
	tmp1 = (*lst_b);
	tmp2 = (*lst_b);
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp1 = tmp2->next;
	tmp2->next = NULL;
	tmp1->next = (*lst_b);
	(*lst_b) = tmp1;
	}
}
