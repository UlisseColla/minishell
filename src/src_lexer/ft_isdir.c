/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:55:03 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:47:51 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_type	ft_isdir(char *input)
{
	DIR	*dir;

	dir = opendir(input);
	if (dir)
	{
		closedir(dir);
		return (DIRECTORY);
	}
	return (NONE);
}
