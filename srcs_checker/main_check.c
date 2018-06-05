/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:42:55 by cammapou          #+#    #+#             */
/*   Updated: 2018/05/17 14:08:09 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int ac, char **av)
{
	t_list	*lst_a;

	if (ac == 1)
		return(-1);
	if (ft_error_check(ac, av) == -1)
		return (-1);
	if (ft_init_pile(&lst_a, ac, av) == 0)
	{
		ft_putendl_fd("Error", 2);
		free(lst_a);
		return(-1);
	}

	ft_checker(lst_a, ac, av);
	ft_print_lst_a(lst_a);
	//free(lst_a);
	return (0);
}
