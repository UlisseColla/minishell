/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:48:15 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:45:23 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*var_name(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] && (ft_isalnum(str[i]) || str[i] == '_'))
		i++;
	ret = ft_calloc(i + 1, sizeof(char));
	i = 0;
	while (str[i] && (ft_isalnum(str[i]) || str[i] == '_'))
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}
