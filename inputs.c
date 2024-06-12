/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:20:21 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 19:42:07 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	show_options(char *buffer)
{
	ft_printf("Que souhaitez vous faire ?\n\n");
	ft_printf("0 : Voir les piles\n");
	ft_printf("1 : sa (swap a)\n");
	ft_printf("2 : sb (swap b)\n");
	ft_printf("3 : ss (swap a & b)\n");
	ft_printf("4 : pa (push a)\n");
	ft_printf("5 : pb (push b)\n");
	ft_printf("6 : ra (rotate a)\n");
	ft_printf("7 : rb (rotate b)\n");
	ft_printf("8 : rr (rotate a & b)\n");
	ft_printf("9 : rra (reverse rotate a)\n");
	ft_printf("10 : rrb (reverse rotate b)\n");
	ft_printf("11 : rrr (reverse rotate a & b)\n");
	ft_printf("q : Terminer le programme\n");
	read(0, buffer, 1);
}

void	get_operations(t_operations *operations)
{
	operations[0] = &show_stacks;
	operations[1] = &sa;
	operations[2] = &sb;
	operations[3] = &ss;
	operations[4] = &pa;
	operations[5] = &pb;
	operations[6] = &ra;
	operations[7] = &rb;
	operations[8] = &rr;
	operations[9] = &rra;
	operations[10] = &rrb;
	operations[11] = &rrr;
}

void	get_user_input(t_list **a, t_list **b)
{
	char			buffer;
	long			index;
	t_operations	operations[12];

	show_options(&buffer);
	if (buffer == 'q')
		return ;
	get_operations(operations);
	index = ft_atoi(&buffer);
	operations[index](a, b);
	get_user_input(a, b);
}
