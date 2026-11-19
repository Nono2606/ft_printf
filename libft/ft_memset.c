/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:15:14 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 11:41:07 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function makes it possible to fill a memory zone, 
identified by its address and size, with a precise value.*/

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((unsigned char *) pointer)[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
