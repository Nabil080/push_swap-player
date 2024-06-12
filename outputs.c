/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outputs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:49:51 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 13:51:31 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	recursive_show_stacks(t_list *a, t_list *b)
{
	if (a && a->next)
		if (b && b->next)
			recursive_show_stacks(a->next, b->next);
		else
			recursive_show_stacks(a->next, b);
	else if(b && b->next)
		recursive_show_stacks(a, b->next);
	if (a)
		if (b)
			ft_printf("%d %d\n", *(int *)a->content, *(int *)b->content);
		else
			ft_printf("%d x\n", *(int *)a->content);
	else if (b)
		ft_printf("x %d\n", *(int *)b->content);
}

void	show_stacks(t_list *a, t_list *b)
{
	recursive_show_stacks(a, b);
	ft_printf("_ _\n");
	ft_printf("a b\n");
}

void	error(void)
{
	ft_printf("Error\n");
}