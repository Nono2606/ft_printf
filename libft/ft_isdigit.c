/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:41:09 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 11:35:54 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function allows to test whether a character is a decimal digit or not.*/

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
