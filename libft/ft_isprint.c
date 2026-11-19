/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:36:26 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 15:31:02 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function allows you to test whether a character 
is displayed (is printable) or not.*/

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
}
