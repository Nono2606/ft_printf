/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:24:40 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/18 10:43:11 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns an array of
strings obtained by splitting ’s’ using the character
’c’ as a delimiter.
Each string in the returned array is allocated
independently.
The array of pointers itself is also allocated
dynamically.
The returned array must be NULL terminated.*/

static size_t	count_word(const char *str, char separator)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == separator)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] != separator && str[i])
				i++;
		}
	}
	return (count);
}

static void	free_split(char **split, size_t len)
{
	while (len > 0)
	{
		len--;
		free(split[len]);
	}
	free(split);
}

static int	create_split(char const *s, char **split, char separator)
{
	size_t		len;
	size_t		i;

	i = 0;
	while (*s)
	{
		len = 0;
		if (*s == separator)
			s++;
		else
		{
			while (s[len] != separator && s[len])
				len++;
			split[i] = ft_substr(s, 0, len);
			if (!split[i])
			{
				free_split(split, i);
				return (0);
			}
			i++;
			s += len;
		}
	}
	split[i] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(((count_word(s, c) + 1) * sizeof(char *)));
	if (split == NULL)
		return (NULL);
	if (!create_split(s, split, c))
		return (NULL);
	return (split);
}
