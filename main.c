/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:19:49 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 13:39:00 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	show_stack(t_list *lst)
{
	if (lst->next)
		show_lst(lst->next);
	ft_printf("%d\n", *(int *)lst->content);
}

int main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	if (!args_check(argc, argv))
		return (1);
	a = parse_as_lst(argc, argv);
	if (!a)
		return (1);
	b = NULL;
	show_stack(a);
	ft_lstclear(&a, free);
	return (0);
}