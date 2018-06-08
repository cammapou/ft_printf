/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algomin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:02:28 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/08 11:49:14 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void 		ft_algomin2(t_list **lst_b)
{
 	while (ft_check_stack2(*lst_b) != 0)
 	{
 		if (*((int*)(*lst_b)->content) < *((int*)(*lst_b)->next->content))
		{
			ft_rb(lst_b);
			ft_printf("sb\n");
		//	ft_print_lst_a(*lst_a);

		}
		else
		{
			ft_rrb(lst_b);
			ft_printf("rrb\n");
			//ft_print_lst_a(*lst_a);

		}
	}
}


void 		ft_algomin(t_list **lst_a)
{
 	while (ft_check_stack(*lst_a) != 0)
 	{
 		if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
		{
			ft_sa(lst_a);
			ft_printf("sa\n");
		//	ft_print_lst_a(*lst_a);

		}
		else
		{
			ft_rra(lst_a);
			ft_printf("rra\n");
			//ft_print_lst_a(*lst_a);

		}
	}
}

void 		ft_small_pa(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
  int len_b;

	ev->len_b = ft_stack_len_b(*lst_b);
	while (ev->len_b) //&& ft_check_stack(*lst_a) == 0)
	{
    //printf("ici\n");
		ft_pa(lst_a, lst_b);
		  ft_putendl("pa");
          ft_print_lst_a(*lst_a);
         ft_print_lst_b(*lst_b);
    //ft_print_lst_a(*lst_a);
    //ft_print_lst_b(*lst_b);
    if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
    {
    //  printf("ici2\n");
      ft_sa(lst_a);
        ft_putendl("sa");

    }
    len_b = ft_stack_len_b(*lst_b);
    //if (len_b == 3)
      //ft_algomin(lst_b);
		//ft_print_lst_a(*lst_a);
		//ft_print_lst_b(*lst_b);
		ev->len_b--;
	}
}

void ft_small_quick_suite_a(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int len_a;
    int med2;
    int len_b;

    med2 = ft_min_value(*lst_a) + ((ft_max_value(*lst_a) - ft_min_value(*lst_a)) / 2);
    med = ft_check_med(lst_a);
    //printf("med =%d\n", med);
    //printf("med2 =%d\n", med2);
    len_a = ft_stack_len_a(*lst_a);
    //printf("ici3\n");
        ev->len_a = ft_stack_len_a(*lst_a);
        while (ft_check_val(*lst_a, med) == -1 )//&& ft_check_stack(*lst_a) != 0)
        {

            //if (len_a == 3 || med >= max)
            //    break ;
            if (*(int*)(*lst_a)->content <= med)
            {
                ft_pb(lst_a, lst_b);
                ft_printf("pb\n");
                printf("ici3\n");
                //ft_print_lst_a(*lst_a);
                //ft_print_lst_b(*lst_b);
            }
            else
            {
                ft_ra(lst_a);
                ft_printf("ra\n");
            	//ft_print_lst_a(*lst_a);
                //ft_print_lst_b(*lst_b);
            }
            len_b = ft_stack_len_b(*lst_b);
            if (len_b >= 2)
            {
                if (*((int*)(*lst_b)->content) < *((int*)(*lst_b)->next->content))
                {
                    ft_sb(lst_b);
                    ft_printf("sb\n");
                  // ft_print_lst_a(*lst_a);
                   //ft_print_lst_b(*lst_b);
                }
            }
        }
        if (len_a == 2)
            ft_algomin(lst_a);
        //printf("ici\n");
        //ft_small_quick_suite_b(ev, lst_a, lst_b);
        ft_small_pa(ev, lst_a, lst_b);
}

void ft_small_quick_suite_b(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int len_b;
    int med2;

    med2 = ft_min_value(*lst_b) + ((ft_max_value(*lst_b) - ft_min_value(*lst_b)) / 2);
    med = ft_check_med(lst_b);
    //printf("med lst_b =%d\n", med);
    //med2 = ft_check_med(lst_b);
    //printf("med2 lst_b =%d\n", med2);
    len_b = ft_stack_len_b(*lst_b);
        //printf("ici2\n");
        //ev->len_a = ft_stack_len_a(*lst_a);
        //    printf("%d\n", *((int*)(*lst_b)->content));
        //printf("ici2\n");
    //    while (1)
    //    {
  			while (ft_check_val2(*lst_b, med) == -1)
  			{
            //    printf("%d\n", *((int*)(*lst_b)->content));
            //    printf("ici2\n");
            //    printf("med lst_b =%d\n", med);
                 //printf("med lst_b =%d\n", med);
                 //printf("lst_b =%d\n", *(int*)(*lst_b)->content);

                 printf("len lst_b =%d\n", len_b);

  				if (*(int*)(*lst_b)->content > med)
  				{
  					ft_pa(lst_a, lst_b);
  					   ft_printf("pa\n");
                   if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
                       ft_sa(lst_a);
  					//ft_print_lst_a(*lst_a);
  					//ft_print_lst_b(*lst_b);
  				}
  				else
  				{
  					ft_rb(lst_b);
  					ft_printf("rb\n");
  					//ft_print_lst_a(*lst_a);
  					//ft_print_lst_b(*lst_b);
                }
                 // med2 = ft_min_value(*lst_b) + ((ft_max_value(*lst_b) - ft_min_value(*lst_b)) / 2);
                  //printf("med2 lst_b =%d\n", med2);
                  while(ft_check_stack(*lst_b) != 0)
                  {
                      med2 = ft_min_value(*lst_b) + ((ft_max_value(*lst_b) - ft_min_value(*lst_b)) / 2);
                      //printf("med2 lst_b =%d\n", med2);
                      while (ft_check_val2(*lst_b, med2) == -1)
            			{
                            len_b = ft_stack_len_b(*lst_b);
                            if (len_b == 3)
                                break ;
            			   if (*(int*)(*lst_b)->content > med2)
            			   {
                             //  printf("ici5\n");
            				   ft_pa(lst_a, lst_b);
            				   ft_printf("pa\n");
                               if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
                                    ft_sa(lst_a);
            					//ft_print_lst_a(*lst_a);
            					//ft_print_lst_b(*lst_b);
            				}
                            else
              				{
              					ft_rb(lst_b);
              					ft_printf("rb\n");
              					//ft_print_lst_a(*lst_a);
              					//ft_print_lst_b(*lst_b);
                            }
                  }
            //if (len_b <= 2)
            //    break;
        }
    //  }
  }
          ft_small_quick_suite_a(ev, lst_a, lst_b);
}


void		ft_small_quick(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
  int med;
  int len;
  int len_a;
  int len_b;
  int med2;
  int max;

  max = ft_max_value(*lst_a);
  //med2 = ft_max_value(*lst_a) + ((ft_max_value(*lst_a) - ft_min_value(*lst_a)) / 2);
  //med = ft_check_med(lst_a);
  //printf("med lst_a =%d\n", med);
  //printf("ici\n");
		while (1)
		{
			while (ft_check_val(*lst_a, med) == -1)
			{
                ev->len_a = ft_stack_len_a(*lst_a);
                if (ev->len_a == 3)
					break ;
				if (*(int*)(*lst_a)->content < med)
				{
                    //printf("ici3\n");
					ft_pb(lst_a, lst_b);
					ft_printf("pb\n");
					//ft_print_lst_a(*lst_a);
					//ft_print_lst_b(*lst_b);
				}
				else
				{
					ft_ra(lst_a);
					ft_printf("ra\n");
					//ft_print_lst_a(*lst_a);
				   //ft_print_lst_b(*lst_b);
                }
                //len_a = ft_stack_len_a(*lst_a);
                len_b = ft_stack_len_b(*lst_b);
                if (len_b >= 2)
                {
                    if (*((int*)(*lst_b)->content) < *((int*)(*lst_b)->next->content))
                    {
                        ft_sb(lst_b);
                        ft_printf("sb\n");
                        //ft_print_lst_a(*lst_a);
      				    //ft_print_lst_b(*lst_b);
                    }
                }
            /*    if (len_a == 4)
                {
                    //printf("len =%d\n", len_a);
                    ft_algomin(lst_a);
                }*/
            }
            if (ev->len_a == 3)
				ft_algomin(lst_a);
            //ev->med++;
            //if (ev->len_a == 2 || ft_check_stack(*lst_a) == 0)
			//	break ;
            //med2 = ft_check_med(lst_b);
            //ev->len_a = ft_stack_len_a(*lst_a);
            //printf("len2 lst_a =%zu\n", ev->len_a);
            if (ev->len_a == 3)
                ft_small_quick_suite_b(ev, lst_a, lst_b);
            //ft_small_quick_suite_a(ev, lst_a, lst_b);
			if (len_a == 2  || ft_check_stack(*lst_a) == 0)
				break ;
            //printf("ici3\n");

        }
        ev->len_a = ft_stack_len_a(*lst_a);
        //printf("len lst_a =%zu\n", ev->len_a);
        if (ft_check_stack(*lst_a) == 0 && ev->len_a == 3)
        {
        //    printf("ici4\n");
            ft_small_pa(ev, lst_a, lst_b);
        }


}
