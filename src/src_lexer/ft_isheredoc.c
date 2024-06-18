/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isheredoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:24:26 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:47:56 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

enum e_type	ft_isheredoc(char *token)
{
	if (token[0] == '<' && token[1] == '<')
		return (HERE_DOC);
	return (ft_isappend(token));
}
