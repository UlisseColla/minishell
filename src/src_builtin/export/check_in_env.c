/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_in_env.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:32:57 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:44:35 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	check_in_env(char **env, char *to_check)
{
	int	j;

	j = 0;
	while (env[j])
	{
		if (ft_strcmp_env(env[j], to_check) == 0)
			return (0);
		j++;
	}
	return (j);
}

char	*check_in_env_char(char **env, char *to_check)
{
	int	j;

	j = 0;
	while (env[j])
	{
		if (ft_strcmp_env(env[j], to_check) == 0)
			return (env[j]);
		j++;
	}
	return (NULL);
}
