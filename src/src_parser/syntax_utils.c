/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:30:59 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/18 13:49:33 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_token	*skip_space_tokens(t_token *token)
{
	while (token != NULL && token->type == SSPACE)
	{
		token = token->next;
	}
	return (token);
}

int	print_syntax_error(char *extract)
{
	ft_printf_fd(2, "%sminishell: syntax error near unexpected token `%s'%s\n",
		RED, extract, RESET);
	return (1);
}
