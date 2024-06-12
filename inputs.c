/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:20:21 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 18:12:56 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	show_options(char *buffer)
{
	ft_printf("Que souhaitez vous faire ?\n\n");
	ft_printf("0 : Terminer le programme\n");
	ft_printf("1 : Voir les piles\n");
	ft_printf("2 : sa (swap a)\n");
	ft_printf("3 : sb (swap b)\n");
	ft_printf("4 : ss (swap a & b)\n");
	ft_printf("5 : pa (push a)\n");
	ft_printf("6 : pb (push b)\n");
	read(0, buffer, 1);
}

void	get_user_input(t_list **a, t_list **b)
{
	char	buffer;

	show_options(&buffer);
	ft_printf("DEBUG BUFFER : %c\n", buffer);
	if (buffer == '0')
		return ;
	if (buffer == '1')
		show_stacks(a, b);
	if (buffer == '2')
		sa(a, b);
	if (buffer == '3')
		sb(a, b);
	if (buffer == '4')
		ss(a, b);
	if (buffer == '5')
		pa(a, b);
	if (buffer == '6')
		pb(a, b);
	get_user_input(a, b);
}
