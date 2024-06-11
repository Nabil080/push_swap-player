/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:19:49 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/11 13:54:18 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	show_lst(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

int main(int argc, char *argv[])
{
	t_list	*a;
	//t_list	*b;
	if (!args_check(argc, argv))
		return (1);
	a = parse_as_lst(argc, argv);
	if (!a)
		return (1);
	show_lst(a);
	ft_lstclear(&a, free);
	return (0);
}