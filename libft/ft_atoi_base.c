/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:57:33 by ulissecolla       #+#    #+#             */
/*   Updated: 2024/03/14 13:43:44 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_space_and_sign(char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		*sign = -1;
		i++;
	}
	return (&str[i]);
}

int	ft_atoi_base(char *str, char *str_base)
{
	int	i;
	int	j;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	str = check_space_and_sign(str, &sign);
	while (str[i])
	{
		j = 0;
		while (str_base[j] && str[i] != str_base[j])
			j++;
		if (str_base[j])
			result = result * ft_strlen(str_base) + j;
		else
			break ;
		i++;
	}
	return (result * sign);
}
