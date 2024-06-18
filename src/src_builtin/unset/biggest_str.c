/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:30:58 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:45:35 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	biggest_str(char *s1, char *s2)
{
	int	a;
	int	b;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	if (a >= b)
		return (a);
	else
		return (b);
}
