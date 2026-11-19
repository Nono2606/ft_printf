/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:57:46 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:16:34 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates memory (using malloc(3)) and returns a new
node. The ’content’ member variable is initialized
with the given parameter ’content’. The variable
’next’ is initialized to NULL.*/

t_list	*ft_lstnew(void *content)
{
	struct s_list	*newlist;

	newlist = malloc(sizeof(struct s_list));
	if (newlist == NULL)
		return (NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
