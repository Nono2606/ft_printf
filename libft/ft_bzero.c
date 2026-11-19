/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:40:19 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 11:45:10 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function bzero() puts at 0 (bytes containing "\0") 
the n first bytes of the block pointed by s.*/

void	ft_bzero(void *pointer, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		((unsigned char *)pointer)[i++] = 0;
}
