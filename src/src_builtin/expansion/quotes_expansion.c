/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quotes_expansion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:21:53 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:44:01 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*quotes_expansion(char *str, int i, int j)
{
	int		to_allocate;
	char	*to_export;

	to_allocate = quotes_count(str, 0, -1) + 1;
	to_export = ft_calloc(to_allocate, sizeof(char));
	while (str[++i])
	{
		if (str[i] == 34 && str[i + 1] && ft_strchr(&str[i + 1], 34))
		{
			i++;
			while (str[i] && str[i] != 34)
				to_export[j++] = str[i++];
		}
		else if (str[i] == 39 && str[i + 1] && ft_strchr(&str[i + 1], 39))
		{
			i++;
			while (str[i] && str[i] != 39)
				to_export[j++] = str[i++];
		}
		else
			to_export[j++] = str[i];
	}
	if (ft_strlen(to_export) == 0)
		return (free(str), free(to_export), NULL);
	return (free(str), to_export);
}
