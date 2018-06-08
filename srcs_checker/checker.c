/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:42:55 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/06 19:46:13 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_stack(t_list *lst_a)
{
	int *j;
	int *i;
	t_list *tmp;

	tmp = lst_a;
		while (tmp->next)
		{
			i = tmp->content;
			j = tmp->next->content;
			if (*i > *j)
				return (-1);
			tmp = tmp->next;
		}
		return (0);
}

int		ft_checkop(t_list *lst_a, t_list *lst_b, char *buf)
{
	ft_strcmp(buf, "sa") == 0 ? ft_sa(&lst_a) : 0;
	ft_strcmp(buf, "sb") == 0 ? ft_sb(&lst_b) : 0;
	ft_strcmp(buf, "ss") == 0 ? ft_ss(&lst_a, &lst_b) : 0;
	ft_strcmp(buf, "pa") == 0 ? ft_pa(&lst_a, &lst_b) : 0;
	ft_strcmp(buf, "pb") == 0 ? ft_pb(&lst_a, &lst_b) : 0;
	ft_strcmp(buf, "ra") == 0 ? ft_ra(&lst_a) : 0;
	ft_strcmp(buf, "rb") == 0 ? ft_rb(&lst_b) : 0;
	ft_strcmp(buf, "rr") == 0 ? ft_rr(&lst_a, &lst_b) : 0;
	ft_strcmp(buf, "rra") == 0 ? ft_rra(&lst_a) : 0;
	ft_strcmp(buf, "rrb") == 0 ? ft_rrb(&lst_b) : 0;
	ft_strcmp(buf, "rrr") == 0 ? ft_rrr(&lst_a, &lst_b) : 0;
	return (0);
}

int		ft_checker(t_list *lst_a, int ac, char **av)
{
	char	*buf;
	t_list *lst_b;

	lst_b = NULL;
	buf = NULL;
	while (get_next_line(0, &buf) > 0)
	{
		if (ft_checkop(lst_a, lst_b, buf) == -1)
		{
			free(buf);
			ft_putendl_fd("Error", 2);
			return (-1);
		}
	}
	if(ft_check_stack(lst_a) == 0 )//&& !(lst_b)->content)
	  ft_printf("OK");
	  else
	  ft_printf("KO");

		//free(lst_b);
	return(0);
}
