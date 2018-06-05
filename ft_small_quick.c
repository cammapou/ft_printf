/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_quick.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:10:09 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/05 14:28:19 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_algomin(t_list **lst_a)
{
	int *p;
	int *i;


	i = (int*)(*lst_a)->content;
	while (ft_check_stack(*lst_a) != 0)
	{

		p = (int*)(*lst_a)->next->content;
		if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
			ft_sa(lst_a);
		else
			ft_rra(lst_a);
		}
}

int	ft_check_val(t_list *lst_a, int nbr)
{
	int			*nbr_tmp;

	while (lst_a)
	{
		nbr_tmp = (int*)lst_a->content;
		//printf("lst_a =%d\n", *(int*)lst_a->content);
		//	printf("nbr_tmp =%d\n", nbr);
		if (*nbr_tmp < nbr)
			return (-1);
		lst_a = lst_a->next;
	}
	return (0);
}

void		ft_algomed_b(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int len;

	len = ft_stack_len_b(*lst_b);
	while (len && ft_check_stack(*lst_a) == 0)
	{
		ft_pa(lst_a, lst_b);
		ft_putendl("pa");
		len--;
	}
}

void		ft_small_quick(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
	int max;
	int len;

		if (ft_stack_de(*lst_a) == 0 && len == 5)
			ft_lstrev(lst_a);
		//while (1)
		//{
			len = ft_stack_len_a(*lst_a);
			while (ft_check_val(*lst_a, med) == -1)
			{
				if (len == 3)
					break ;
				if (*(int*)(*lst_a)->content < ev->med)
				{
					ft_pb(lst_a, lst_b);
					ft_putendl("pb");
				}
				else
				{
					ft_ra(lst_a);
					ft_putendl("ra");
				}
			}
			if (len == 3)
				ft_algomin(lst_a);
			ev->med++;
			if (ev->med > max || len == 2	|| ft_check_stack(*lst_a) == 0)
				break ;
		}
		ft_algomed_b(ev, lst_a, lst_b);
}
