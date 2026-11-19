/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:36:51 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/17 09:39:52 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function searches for the last occurrence of the character 
passed to the second parameter in the specified string 
via the first parameter. */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
