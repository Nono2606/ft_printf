/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 12:37:04 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/17 14:25:50 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/

static size_t	count_number(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*number;
	size_t	len;
	long	nb;

	nb = n;
	len = count_number(nb);
	number = malloc(((len + 1) * sizeof(char)));
	if (!number)
		return (NULL);
	number[len] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		number[0] = '-';
	}
	if (nb == 0)
		number[0] = '0';
	while (nb > 0)
	{
		number[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (number);
}
