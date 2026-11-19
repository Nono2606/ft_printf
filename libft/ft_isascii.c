/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:27:44 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 11:37:43 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function isasciitests whether an integer value corresponds 
to a 7-bit ASCII character.*/

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
