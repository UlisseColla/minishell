/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:56:14 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:47:54 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_type	ft_isfile(char *input)
{
	int	fd;

	fd = open(input, O_RDONLY);
	if (fd != -1)
	{
		close(fd);
		return (MY_FILE);
	}
	return (NONE);
}
