/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:30:15 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/17 11:14:42 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function converts a lowercase letter to a capital letter.*/

int	ft_toupper(int character)
{
	if (character < 'a' || character > 'z')
		return (character);
	return ((character - 'a') + 'A');
}
