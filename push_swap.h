/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:17:03 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/12 13:53:06 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

/*
* parsing	
*/
int		args_check(size_t argc, char **argv);
t_list	*parse_as_lst(size_t argc, char **argv);
/*
* outputs
*/
void	show_stacks(t_list *a, t_list *b);
/*
* operations
*/
void	sa(t_list *a);

void	sb(t_list *b);

#endif