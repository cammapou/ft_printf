/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:32:53 by cammapou          #+#    #+#             */
/*   Updated: 2018/05/03 12:32:55 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstrev(t_list **lst_a)
{
	t_list	*old_list;
	t_list	*new_list;
	t_list	*tmp;

	old_list = *lst_a;
	new_list = NULL;
	while (old_list)
	{
		tmp = old_list->next;
		old_list->next = NULL;
		ft_lstadd(&new_list, old_list);
		old_list = tmp;
	}
	*lst_a = new_list;
}
