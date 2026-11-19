/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:39:59 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:07:32 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function allows to compare the content of two blocks 
of memory specified by the first two parameters of the function. 
The third parameter, size, allows to specify the number of bytes 
on which to compare the two blocks. */

int	ft_memcmp(const void *pt1, const void *pt2, size_t size)
{
	const unsigned char	*fc;
	const unsigned char	*sc;

	fc = (const unsigned char *)pt1;
	sc = (const unsigned char *)pt2;
	while (size--)
	{
		if (*fc != *sc)
			return (*fc - *sc);
		fc++;
		sc++;
	}
	return (0);
}
