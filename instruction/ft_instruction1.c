/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:32:53 by cammapou          #+#    #+#             */
/*   Updated: 2018/05/03 12:32:55 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
**				Swap a - intervertit les 2 premiers éléments au sommet de la pile a.
**				Ne fait rien s’il n’y en a qu’un ou aucun.
*/

void	ft_sa(t_list **lst_a)
{
	t_list *tmp;

	if (!lst_a)
		return ;
	if ((*lst_a) && (*lst_a)->next)
	{
		tmp = (*lst_a);
		(*lst_a) = (*lst_a)->next;
		tmp->next = (*lst_a)->next;
		(*lst_a)->next = tmp;
	}
}

/*
**		Swap b - intervertit les 2 premiers éléments au sommet de la pile b.
**		Ne fait rien s’il n’y en a qu’un ou aucun.
*/
void	ft_sb(t_list  **lst_b)
{
	t_list	*tmp;

	if (!*lst_b)
		return ;
	if (*lst_b && (*lst_b)->next)
	{
		tmp = (*lst_b);
		(*lst_b) = (*lst_b)->next;
		tmp->next = (*lst_b)->next;
		(*lst_b)->next = tmp;
	}
}

void	ft_ss(t_list **lst_a, t_list **lst_b)
{
	if (!*lst_a && !*lst_b)
		return ;
	ft_sa(&(*lst_a));
	ft_sb(&(*lst_b));
}

/*
**				push a - prend le premier élément au sommet de b et le met sur a.
**				Ne fait rien si b est vide.
*/

void	ft_pa(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;

	if (!*lst_a || !*lst_b)
		return ;
	if (*lst_b)
	{
		tmp = (*lst_a);
		(*lst_a) = (*lst_b);
		(*lst_b) = (*lst_b)->next;
		(*lst_a)->next = tmp;
	}
}

/*
**				push b - prend le premier élément au sommet de a et le met sur b.
**				Ne fait rien si a est vide.
*/

void	ft_pb(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;

	if (!*lst_a && !*lst_b)
		return ;
	if (*lst_a)
	{
		tmp = (*lst_b);
		(*lst_b) = (*lst_a);
		(*lst_a) = (*lst_a)->next;
		(*lst_b)->next = tmp;
	}
}

void ft_rrr(t_list **lst_a, t_list **lst_b)
{
	if (!*lst_a && !*lst_b)
		return ;
	ft_rra(&(*lst_a));
	ft_rrb(&(*lst_b));
}
