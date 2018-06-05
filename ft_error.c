/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:00:24 by cammapou          #+#    #+#             */
/*   Updated: 2018/05/17 12:24:04 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int		ft_check_doublon(char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (av[j])
	{
		while (av[i])
		{
			if (ft_strcmp(av[i], av[j]) == 0 && i != j)
			{
				return (-1);
			}
			i++;
		}
		i = 1;
		j++;
	}
	return (0);
}

int		ft_alpha(char **av)
{
	int i;
	int j;
	int k;

	j = 1;
	i = 0;

	while (av[j])
	{
		while (av[i])
		{
			if (( *av[i] >= 'A' && *av[i] <= 'Z') || (*av[i] >= 'a' && *av[i] <= 'z'))
				return (-1);
			i++;
		}
		j++;

		i = 1;
	}
	return (0);
}

int		ft_error_check(int ac, char **av)
{
	int i;

	i = 0;
	if (ac <= 1)
	{
		ft_printf("usage: ARG= 4 67 3 87 23; ./push_swap $ARG | ./checker $ARG\n");
		return(-1);
	}
	else if (ft_alpha(av) == -1)
			return (-1);
	else if (ft_check_doublon(&av[i]) == -1)
		return (-1);
	return (0);
}
