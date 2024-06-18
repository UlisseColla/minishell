/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:34:23 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:44:38 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	not_valid_identifier(char *str, char **env, int flag)
{
	if (flag == 1)
		ft_printf_fd(2, "%s : not a valid identifier\n", str);
	else
		set_exit_value(env, 1);
}

int	check_str(char *str, char **env, int i, int flag)
{
	if (!str)
		return (0);
	if (*str == '=' || is_digit(str) || ft_isdigit(*str))
		return (not_valid_identifier(str, env, flag), 0);
	while (str[i] && str[i] != '=')
	{
		while (str[i] == '_')
			i++;
		if (str[i] == '=' || !str[i]
			|| (str[i] == '+' && str[i + 1] && str[i + 1] == '='))
			break ;
		if (!ft_isalnum(str[i]))
			return (not_valid_identifier(str, env, flag), 0);
		i++;
	}
	return (i);
}
