/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:31:04 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 16:07:34 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_top(t_list *stack)
{
	t_list	*new_last;
	t_list	*new_before_last;

	if (ft_lstsize(stack) < 2)
		return ;
	new_last = ft_lstlast_offset(stack, 1);
	new_before_last = ft_lstlast(stack);
	ft_lstlast_offset(stack, 2)->next = new_before_last;
	new_before_last->next = new_last;
	new_last->next = NULL;
}

void	push_top(t_list *src, t_list *dst)
{
	ft_lstadd_back(&dst, src);
}