/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_and_copy_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:37:13 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:43:44 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	fill_str(char *str, char *to_fill)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		to_fill[i] = str[i];
		i++;
	}
}
