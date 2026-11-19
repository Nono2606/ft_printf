/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:07:24 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:15:24 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the character ’c’ to the given file
descriptor.*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
