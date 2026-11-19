/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:43:52 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:13:33 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/*Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of ’s1’ and
’s2’.*/

static char	*addstr(char *str, const char *join, size_t start)
{
	size_t	i;

	i = 0;
	while (join[i])
	{
		str[start + i] = join[i];
		i++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	size_t		s1_len;
	char		*str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	len = s1_len + ft_strlen(s2);
	str = malloc((len * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	addstr(str, s1, 0);
	addstr(str, s2, s1_len);
	str[len] = '\0';
	return (str);
}
