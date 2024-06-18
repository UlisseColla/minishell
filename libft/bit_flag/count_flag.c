/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 21:00:55 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_flag(char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < 8)
	{
		if (c & (1 << i))
		{
			count++;
		}
		i++;
	}
	return (count);
}
