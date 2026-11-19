/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:02:44 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:15:15 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ on each character of the
string passed as argument, passing its index as first
argument. Each character is passed by address to ’f’
to be modified if necessary.*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
