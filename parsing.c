/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:27:41 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 13:25:25 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi_check(const char *str)
{
	size_t	i;
	long	result;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	result = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		result = result * 10 + (str[i] - '0');
		if (result > INT_MAX && str[0] != '-')
			return (0);
		if (result > (long)INT_MAX + 1 && str[0] == '-')
			return (0);	
		i++;
	}
	return (1);
}

int	args_check(size_t argc, char **argv)
{
	size_t	i;
	size_t	j;
	
	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (!ft_atoi_check(argv[i]))
			return (ft_printf("Error\n") - 6);
		j = 1;
		while (i + j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[i + j]))
				return (ft_printf("Error\n") - 6);
			j++;
		}
		i++;
	}
	// creer une liste avec chaque int
	return (1);
}

t_list	*parse_as_lst(size_t argc, char **argv)
{
	t_list	*lst;
	t_list	*new;
	int		*content;

	lst = NULL;
	while (argc > 1)
	{
		content = malloc(sizeof(int));
		if (!content)
			return (ft_lstclear(&lst, NULL));
		*content = ft_atoi(argv[argc - 1]);
		new = ft_lstnew(content);
		if (!new)
		{
			free(content);
			ft_lstclear(&lst, NULL);
			return (NULL);
		}
		ft_lstadd_back(&lst, new);
		argc--;
	}
	return (lst);
}
