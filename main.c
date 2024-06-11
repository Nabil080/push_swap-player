/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:19:49 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/11 13:44:32 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_list	*a;
	//t_list	*b;
	if (!args_check(argc, argv))
		return (1);
	a = parse_as_lst(argc, argv);
	// while (a)
	// {
	// 	ft_printf("%d\n", *(int *)a->content);
	// 	a = a->next;
	// }
	ft_lstclear(&a, free);
	return (0);
}