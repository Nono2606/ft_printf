/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:06:58 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/18 10:42:39 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/*Find the first substring in a length-limited string*/

char	*ft_strnstr(const char *fullstr, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (fullstr[i] && i < len)
	{
		j = 0;
		while (fullstr[i + j] == substr[j]
			&& fullstr[i + j] && (j + i) < len)
			j++;
		if (substr[j] == '\0')
			return ((char *)(fullstr + i));
		i++;
	}
	if (*substr == '\0')
		return ((char *)fullstr);
	return (NULL);
}
