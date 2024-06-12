/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:31:04 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 18:53:27 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_top(t_list **stack)
{
	t_list	*new_last;
	t_list	*new_before_last;

	if (ft_lstsize(*stack) < 2)
		return ;
	new_last = ft_lstlast_offset(*stack, 1);
	new_before_last = ft_lstlast(*stack);
	ft_lstlast_offset(*stack, 2)->next = new_before_last;
	new_before_last->next = new_last;
	new_last->next = NULL;
}

void	push_top(t_list **src, t_list **dst)
{
	if (!*src)
		return ;
	ft_lstadd_back(dst, ft_lstlast(*src));
	if (!(*src)->next)
		*src = NULL;
	else
		ft_lstlast_offset(*src, 1)->next = NULL;
}

void	rotate(t_list **stack)
{
	t_list	*last;

	if (!*stack)
		return ;
	last = ft_lstlast(*stack);
	ft_lstlast_offset(*stack, 1)->next = NULL;
	last->next = *stack;
	*stack = last;
}
