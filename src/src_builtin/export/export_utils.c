/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:31:03 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:44:45 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_and_copy(t_data **d, char **new_args, int *i, int *j)
{
	free((*d)->env[*j]);
	(*d)->env[*j] = ft_strdup(new_args[*i]);
	*i += 1;
}
