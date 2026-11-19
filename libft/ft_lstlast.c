/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:11:23 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/17 14:31:04 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns the last node of the list.*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while ((*lst).next)
		lst = (*lst).next;
	return (lst);
}
