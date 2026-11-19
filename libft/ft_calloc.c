/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:40:44 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/17 13:10:15 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/*This function allocates a memory block by initializing 
all these bytes to the value 0.*/

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	size_t	nbytes;
	void	*memoryblock;

	if (elementSize > SIZE_MAX / elementCount)
		return (NULL);
	nbytes = elementCount * elementSize;
	memoryblock = malloc(nbytes);
	if (memoryblock == NULL)
		return (NULL);
	ft_memset(memoryblock, 0, nbytes);
	return (memoryblock);
}
