/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:54:12 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/08 17:45:00 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void ft_quick_3(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int max;
    int len_b;

    max = ft_max_value(*lst_a);

    med = ft_check_med(lst_a);
        while (ft_check_val(*lst_a, med) == -1)
        {
            if (len == 3)
                break;
            //printf("med =%d\n", med);
            if (*(int*)(*lst_a)->content < med)
            {
                ft_pb(lst_a, lst_b);
                ft_printf("pb\n");
                //ft_print_lst_a(*lst_a);
                //ft_print_lst_b(*lst_b);
            }
            else
            {
                ft_ra(lst_a);
                ft_printf("ra\n");
              // ft_print_lst_a(*lst_a);
              // ft_print_lst_b(*lst_b);
            }
            len_b = ft_stack_len_b(*lst_b);
            //printf("%d\n", len_b);
            if (len_b > 2)
            {
                if (*((int*)(*lst_b)->content) < *((int*)(*lst_b)->next->content))
                {
                    ft_sb(lst_b);
                    ft_printf("sb\n");
                    //ft_print_lst_a(*lst_a);
                    //ft_print_lst_b(*lst_b);
                }
            }
        }
        //ft_quick_b(ev, lst_a, lst_b);

}

void ft_quick_b(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int med2;

    med = ft_check_med(lst_b);
    printf("med_b =%d\n", med);
    while (ft_check_val2(*lst_b, med) == -1)
    {
        if (*(int*)(*lst_b)->content > med)
        {
            //ft_print_lst_a(*lst_a);
            //ft_print_lst_b(*lst_b);
            ft_pa(lst_a, lst_b);
            printf("pa\n");

        }
        else
            ft_rb(lst_b);
            printf("rb\n");
        if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
        {
            ft_sa(lst_a);
            printf("sa\n");
        }
    }
    len = ft_stack_len_b(*lst_b);
    if(len == 3)
        ft_algomin2(lst_b);
    med = ft_check_med(lst_b);
    //printf("med_b =%d\n", med);
    //printf("len =%d\n", len);
    med2 = ft_check_med2(lst_b);
    //printf("med2 =%d\n", med2);
    while (ft_check_val(*lst_b, med2) == -1 )//&& len)
    {
        //printf("ici\n");
        if (*(int*)(*lst_b)->content < med2)
        {
            //ft_print_lst_a(*lst_a);
            //ft_print_lst_b(*lst_b);
            ft_pa(lst_a, lst_b);
            printf("pa\n");

        }
        else
            ft_rb(lst_b);
            printf("rb\n");
        if (*((int*)(*lst_a)->content) > *((int*)(*lst_a)->next->content))
        {
            ft_sa(lst_a);
            printf("sa\n");
        }
    }
    /*if (ft_check_stack(*lst_a) != 0 && !lst_b)
    {
        ft_quick(ev , lst_a, lst_b);
    }*/

    /*while (ft_check_stack2(*lst_b) != 0)
    {
        ft_quick_b(ev, lst_a, lst_b);
    }*/
    /*if (len <= 3)
    {
        printf("ici\n");
        ft_quick(ev, lst_b, lst_a);
    }*/

    if (ft_check_stack(*lst_a) != 0)
        ft_quick_3(ev, lst_a, lst_b);
}


void ft_quick(t_ev *ev, t_list **lst_a, t_list **lst_b)
{
    int med;
    int len;
    int max;
    int len_b;

    max = ft_max_value(*lst_a);
    med = ft_check_med(lst_a);
    //printf("ici\n");
        while (ft_check_val(*lst_a, med) == -1)
        {
            if (len == 3)
                break;
            printf("med =%d\n", med);
            if (*(int*)(*lst_a)->content < med)
            {
                ft_pb(lst_a, lst_b);
                ft_printf("pb\n");
                //ft_print_lst_a(*lst_a);
                //ft_print_lst_b(*lst_b);
            }
            else
            {
                ft_ra(lst_a);
                ft_printf("ra\n");
            //    ft_print_lst_a(*lst_a);
            //    ft_print_lst_b(*lst_b);
            }
            len_b = ft_stack_len_b(*lst_b);
            if(len_b == 3)
                ft_algomin2(lst_b);
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
        }
        len = ft_stack_len_a(*lst_a);
        len_b = ft_stack_len_b(*lst_b);
        if (ft_check_stack2(*lst_b) != 0 || len_b == 1)
            ft_quick_b(ev, lst_a, lst_b);
            //printf("med =%d\n", len_b);
        if (ft_check_stack2(*lst_b) == 0 && len_b >= 4)
            ft_quick(ev, lst_a, lst_b);
        //printf("len =%d\n", len);
        /*if (len == 3)
        {
            //printf("ici\n");
            len_b = ft_stack_len_b(*lst_b);
            while (len_b)
            {
                ft_pa(lst_a, lst_b);
                ft_printf("pa\n");
                len_b--;
            }


        }*/



}
