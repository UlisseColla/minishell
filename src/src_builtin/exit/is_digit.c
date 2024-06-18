/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:21:32 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:43:29 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] != '=')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (i);
}

int	is_digit_exit(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] && str[i] != '=')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (i);
}
