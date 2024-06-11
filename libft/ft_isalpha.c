/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:50:33 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/11 12:56:33 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}
/*
int main(int argc, char const *argv[])
{
	if (argc != 2)
		return (1);
	printf("isalpha : %i\n", isalpha(*argv[1]));
	printf("ft_isalpha : %i\n", ft_isalpha(*argv[1]));
	return (0);
}
*/