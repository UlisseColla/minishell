/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:26:15 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:44:31 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	handle_no_sign(char **args, int index, char *to_check)
{
	int	i;

	i = index;
	index++;
	while (index > 1)
	{
		if (args[index] && ft_strcmp_env(args[index], to_check) == 0
			&& value_sign(args[index]))
			return (0);
		index--;
	}
	i++;
	while (args[i])
	{
		if (ft_strcmp_env(args[i], to_check) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_double(char **args, int index, char *to_check)
{
	int	tmp;
	int	is_double;

	is_double = 0;
	tmp = index;
	if (!*args && value_sign(to_check))
		return (1);
	index++;
	while (args[index])
	{
		if (ft_strcmp_env(args[index], to_check) == 0
			&& value_sign(args[index]))
			is_double = 1;
		index++;
	}
	if (!value_sign(to_check) && !handle_no_sign(args, tmp, to_check))
		return (0);
	if (is_double > 0)
		return (0);
	return (1);
}
