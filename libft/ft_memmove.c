/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:23:10 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 14:39:04 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function allows you to copy a block of memory specified 
by the parameter sourcein a new location designated 
by the parameter destination. 
It can therefore be said that this function is close to the memcpy function. 
However, the difference is in the fact that 
the function memmove Accepts that both memory areas may overlap.*/

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	const unsigned char	*from;
	unsigned char		*to;

	if (!dest || !src)
		return (NULL);
	from = (const unsigned char *)src;
	to = (unsigned char *)dest;
	if (to > from)
	{
		while (count--)
			to[count] = from[count];
	}
	else
	{
		while (count--)
			*to++ = *from++;
	}
	return (dest);
}
