/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_exit_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:30:55 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:43:33 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	set_exit_value(char **env, int exit)
{
	char	*exit_value;

	if (env[STATUS] != NULL)
		free(env[STATUS]);
	else
		return ;
	exit_value = ft_itoa(exit);
	env[STATUS] = ft_strjoin("?=", exit_value);
	free(exit_value);
}
