/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/05 17:19:43 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_pushswap(t_ev  *ev, t_list  **lst_a, t_list  **lst_b)
{
  int len;

  ev->max = ft_max_value(*lst_a);
  len = ft_stack_len_a(*lst_a);
  if (ft_check_stack(*lst_a) == 0)
    return(0);
  else if (len <= 3)
  {
  //  printf("ici\n");
    ft_algomin(lst_a);
  }
  else if (len > 3 && len <= 100)
  {
  //  printf("ici\n");
    ft_small_quick(ev, lst_a, lst_b);
  }
  else if (len > 100 && len <= 500)
  {
  //    printf("ici\n");
      ft_med_quick(ev, lst_a, lst_b);
  }
  return (0);
}
