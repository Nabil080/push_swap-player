/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:17:03 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 19:02:29 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

/*
* parsing	
*/
void	args_check(size_t argc, char **argv);
t_list	*parse_as_lst(size_t argc, char **argv);
/*
* inputs
*/
void	get_user_input(t_list **a, t_list **b);
/*
* outputs
*/
void	show_stacks(t_list **a, t_list **b);

void	exit_error(void);

void	exit_malloc(void);

void	exit_success(t_list	*a);
/*
* operations
*/
void	swap_top(t_list **stack);

void	sa(t_list **a, t_list **b);

void	sb(t_list **a, t_list **b);

void	ss(t_list **a, t_list **b);

void	push_top(t_list **src, t_list **dst);

void	pa(t_list **a, t_list **b);

void	pb(t_list **a, t_list **b);

void	rotate(t_list **stack);

void	ra(t_list **a, t_list **b);

void	rb(t_list **a, t_list **b);

void	rr(t_list **a, t_list **b);

void	reverse_rotate(t_list **stack);

void	rra(t_list **a, t_list **b);

void	rrb(t_list **a, t_list **b);

void	rrr(t_list **a, t_list **b);

#endif