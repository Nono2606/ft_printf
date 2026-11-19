/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:54:50 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/18 10:42:15 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function ’f’ to each character of the
string ’s’, passing its index as the first argument
and the character itself as the second. A new string
is created (using malloc(3)) to collect the results
from the successive applications of ’f’.*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*news;

	if (!s || !f)
		return (NULL);
	i = 0;
	news = malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (news == NULL)
		return (NULL);
	while (s[i])
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
