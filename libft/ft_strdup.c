/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:42:39 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 13:30:55 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/*This function allows you to duplicate a string*/

char	*ft_strdup( const char *source)
{
	size_t		i;
	char		*str;

	if (!source)
		return (NULL);
	i = 0;
	str = malloc((ft_strlen(source) * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	while (source[i])
	{
		str[i] = source[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
