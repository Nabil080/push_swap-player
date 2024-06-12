/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outputs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:49:51 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 14:45:17 by nbellila         ###   ########.fr       */
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
	ft_printf("\n");
	recursive_show_stacks(a, b);
	ft_printf("_ _\n");
	ft_printf("a b\n\n");
}

void	exit_error(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	exit_malloc(void)
{
	ft_printf("A malloc failed\n");
	exit(EXIT_FAILURE);
}

void	exit_success(t_list	*a)
{
	ft_lstclear(&a, free);
	ft_printf("Program successfully executed, everything freed\n");
	exit(EXIT_SUCCESS);
}