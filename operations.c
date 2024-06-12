/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:31:04 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 14:14:17 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_top(t_list *stack)
{
	t_list	*new_last;
	t_list	*new_before_last;

	if (ft_lstsize(stack) < 2)
		return ;
	while(stack->next->next->next)
		stack = stack->next;
	new_last = stack->next;
	new_before_last = new_last->next;
	new_last->next = NULL;
	new_before_last->next = new_last;
	stack->next = new_before_last;
}
// lst->lst->lst->lst->NULL
void	sa(t_list *a, t_list *b)
{
	swap_top(a);
	ft_printf("Operation done : sa\n");
	show_stacks(a, b);
}

void	sb(t_list *a, t_list *b)
{
	swap_top(b);
	ft_printf("Operation done : sb\n");
	show_stacks(a, b);
}