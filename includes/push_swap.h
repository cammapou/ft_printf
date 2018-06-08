/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <cammapou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:48:10 by cammapou          #+#    #+#             */
/*   Updated: 2018/06/08 13:38:53 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef		PUSH_SWAP_H
# define	PUSH_SWAP_H

# include "../libft/libft.h"
# include "../printf/includes/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_ev
{
int 				      *tmp;
size_t            len_a;
size_t            len_b;
size_t             max;
int               med;
int               *min;
int 				      flagV;
int					      flagC;
}					        t_ev;

int             ft_check_med2(t_list **lst_b);
int	          ft_check_stack2(t_list *lst_a);
void 		  ft_algomin2(t_list **lst_a);
void          ft_quick(t_ev *ev, t_list **lst_a, t_list **lst_b);
void          ft_small_quick_suite_b(t_ev *ev, t_list **lst_a, t_list **lst_b);
int	          ft_check_val2(t_list *lst_b, int nbr);
int           ft_pushswap(t_ev  *ev, t_list  **lst_a, t_list  **lst_b);
/*
**				Algo_med
*/
void          ft_med_quick(t_ev *ev, t_list **lst_a, t_list **lst_b);
/*
**				Algo_min
*/
void          ft_algomin(t_list **lst_a);
void		      ft_small_pa(t_ev *ev, t_list **lst_a, t_list **lst_b);
void          ft_small_quick(t_ev *ev, t_list **lst_a, t_list **lst_b);
/*
**				Utils
*/
int           ft_check_med(t_list **lst_a);
void	        ft_check_flags(t_ev *ev, char	**av);
int					  ft_error_check(int ac, char **av);
int					  ft_check_doublon(char **av);
int					  ft_init_pile(t_list **lst_a, int ac, char **av);
void	        ft_print_lst_a(t_list *lst_a);
void	        ft_print_lst_b(t_list *lst_b);
/*
**				Checker
*/
int 				ft_checker(t_list	*lst_a, int ac, char **av);
int					ft_check_stack(t_list *lst_a);
int 				ft_checkop(t_list *lst_a, t_list *lst_b, char *buf);
/*
**				Instruction
*/
void    		ft_sa(t_list **lst_a);
void 				ft_sb(t_list  **lst_b);
void 				ft_ss(t_list **lst_a, t_list **lst_b);
void 				ft_pa(t_list **lst_a, t_list **lst_b);
void 				ft_pb(t_list **lst_a, t_list **lst_b);
void 				ft_ra(t_list **lst_a);
void        ft_rb(t_list **lst_b);
void        ft_rr(t_list **lst_a, t_list **lst_b);
void        ft_rra(t_list **lst_a);
void        ft_rrb(t_list **lst_b);
void        ft_rrr(t_list **lst_a, t_list **lst_b);
/*
**				Tools
*/
void	ft_stack_clear(t_list **begin_list);
int	ft_check_val(t_list *lst_a, int nbr);
int	     ft_stack_de(t_list *lst_a);
int      ft_min_value(t_list	*lst_a);
int 	   ft_max_value(t_list *lst_a);
size_t   ft_stack_len_b(t_list *lst_b);
size_t   ft_stack_len_a(t_list *lst_a);

#endif
