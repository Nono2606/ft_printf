/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:13:40 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:16:10 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the integer ’n’ to the given file descriptor.*/

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (n < 0)
	{
		number = -number;
		ft_putchar_fd('-', fd);
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}
