/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_name_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:43:39 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:44:20 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	var_name_len(char *str, char **env)
{
	int	i;

	i = 0;
	if (ft_strncmp(str, "$$", 2) == 0)
		return (ft_strlen(env[PID]));
	if (ft_strncmp(str, "$?", 2) == 0)
		return (ft_strlen(env[STATUS]));
	while (str[i] && (ft_isalnum(str[i]) || str[i] == '_'))
		i++;
	return (i);
}
