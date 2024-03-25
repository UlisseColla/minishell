/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:07:15 by ucolla            #+#    #+#             */
/*   Updated: 2024/03/21 11:49:35 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <string.h>
# include <dirent.h>
# include <termios.h>
# include <sys/ioctl.h>
# include <fcntl.h>
# include <term.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "../libft/libft.h"

# define BLACK "\e[30m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define BYELLOW "\e[1;33m"
# define BLUE "\e[34m"
# define MAGENTA "\e[35m"
# define CYAN "\e[36m"
# define BOLD "\e[1m"
# define RESET "\e[0m"

#endif
