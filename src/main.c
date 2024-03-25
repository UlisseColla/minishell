/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:07:21 by ucolla            #+#    #+#             */
/*   Updated: 2024/03/21 11:57:18 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	exit_check(char *input)
{
	int	i;

	i = 0;
	while (input[i] && input[i] == ' ')
		i++;
	if (ft_strlen(&input[i]) == 4 && ft_strncmp("exit", &input[i], 4) == 0)
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	printf("ac: %d - av: %s\n", ac, av[0]);
	char	*input;

	while (42)
	{
		input = readline("minishell > ");
		if (exit_check(input) == 1)
			break ;
		add_history(input);
	}
	
	free(input);
}
