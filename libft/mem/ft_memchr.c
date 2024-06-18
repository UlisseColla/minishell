/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <fzucconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:08:13 by fzucconi          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:38 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff;
	unsigned char	uc;

	buff = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*buff == uc)
			return ((void *)buff);
		buff++;
	}
	return (NULL);
}

/*DESCRIPTION
       The memchr() function scans the initial n  bytes  of  the  memory
       area pointed to by s for the first instance of c.  Both c and the
       bytes of the memory area pointed to by s are interpreted  as  un‐
       signed char.

RETURN VALUE
       The memchr() and memrchr() functions  return  a  pointer  to  the
       matching  byte  or  NULL  if  the character does not occur in the
       given memory area.
-------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char searchChar = 'W';
    size_t searchLen = 13;  // Length of the string excluding the null
	//	terminator

    void *result = ft_memchr(str, searchChar, searchLen);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", searchChar,
			(size_t)((char *)result - str));
    } else {
        printf("Character '%c' not found in the given memory area\n",
			searchChar);
    }

    return 0;
}
*/