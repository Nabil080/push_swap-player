/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:20:21 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 15:19:42 by nbellila         ###   ########.fr       */
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
	read(0, buffer, 1);
}

int	get_user_input(t_list *a, t_list *b)
{
	char	buffer;

	show_options(&buffer);
	while (!ft_isdigit(buffer))
	{
		ft_printf("Merci de choisir une option valide\n\n");
		show_options(&buffer);
	}
	if (buffer == '0')
		return (0);
	if (buffer == '1')
		show_stacks(a, b);
	if (buffer == '2')
		sa(a, b);
	if (buffer == '3')
		sb(a, b);
	if (buffer == '4')
		ss(a, b);
	return (1);
}
