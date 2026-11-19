/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:55:25 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:17:48 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Counts the number of nodes in the list.*/

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int		i;

	i = 0;
	while (lst)
	{
		lst = (*lst).next;
		i++;
	}
	return (i);
}
