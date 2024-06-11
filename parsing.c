/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:27:41 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/11 13:52:10 by nbellila         ###   ########.fr       */
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
