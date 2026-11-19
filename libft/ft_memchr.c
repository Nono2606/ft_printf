/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:38:28 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/18 10:44:06 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Looks for the first occurrence of a typed value int, 
but interpreted as char, in a block of memory.*/

void	*ft_memchr(const void *block, int searched, size_t size)
{
	const unsigned char	*src;

	src = (const unsigned char *)block;
	while (size--)
	{
		if (*src == (unsigned char)searched)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
