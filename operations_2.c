/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:32:52 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 18:47:09 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, t_list **b)
{
	rotate(a);
	ft_printf("Operation done : ra\n");
	show_stacks(a, b);
}

void	rb(t_list **a, t_list **b)
{
	rotate(b);
	ft_printf("Operation done : rb\n");
	show_stacks(a, b);
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("Operation done : rr\n");
	show_stacks(a, b);
}
