/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:19:49 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 14:00:44 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	args_check(argc, argv);
	a = parse_as_lst(argc, argv);
	if (!a)
		exit_malloc();
	b = NULL;
	show_stacks(a, b);
	exit_success(a);
}