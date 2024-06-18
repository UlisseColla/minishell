/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_env.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:46:18 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:45:14 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	ft_strlen_ext(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '=' && str[i] != '+')
		i++;
	return (i);
}

int	ft_strcmp_env(char *str_env, char *str)
{
	int	i;

	i = 0;
	while ((str_env[i] && str[i]) && str_env[i] != '='
		&& (str[i] != '=' || str[i] != '+'))
	{
		if (str_env[i] - str[i] != 0)
			return (1);
		i++;
	}
	if (ft_strlen_ext(str_env) != ft_strlen_ext(str))
		return (1);
	return (0);
}
