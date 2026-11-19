/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:33:23 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:00:21 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function converts a capital letter to a lowercase letter.*/

int	ft_tolower(int character)
{
	if (character < 'A' || character > 'Z')
		return (character);
	return (character + ('a' - 'A'));
}
