/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:33:50 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:01:12 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function searches for the first occurrence of the character 
passed in the second parameter in the specified string 
via the first parameter.*/

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
}
