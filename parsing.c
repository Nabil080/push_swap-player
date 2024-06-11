/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:27:41 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/11 13:18:07 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_itoa_check(const char *str)
{
	size_t	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	args_check(size_t argc, char **argv)
{
	size_t	i;
	
	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (!ft_itoa_check(argv[i]))
			return (ft_printf("Error\n") - 6);
		i++;
	}
	// creer une liste avec chaque int
	return (1);
}