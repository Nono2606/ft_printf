/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:37:51 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/17 12:47:47 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function makes it possible to compare two strings and to 
know whether the first is less than, equal to or greater than the second.*/

int	ft_strncmp(const char *f, const char *s, size_t lenght)
{
	size_t	i;

	i = 0;
	while ((f[i] || s[i]) && i < lenght)
	{
		if ((unsigned char)f[i] != (unsigned char)s[i])
			return ((unsigned char)f[i] - (unsigned char)s[i]);
		i++;
	}
	return (0);
}
