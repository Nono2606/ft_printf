/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:35:35 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/18 10:43:26 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function strlcpy copies a string knowing the total size 
of the destination buffer. The result is always finished by '\0'
If the available size is strictly positive.*/

size_t	ft_strlcpy(char *dest, const char *src, size_t count)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if ((src_len + 1) < count)
	{
		ft_memcpy(dest, src, src_len + 1);
	}
	else if (count != 0)
	{
		ft_memcpy(dest, src, count - 1);
		dest[count - 1] = '\0';
	}
	return (src_len);
}
