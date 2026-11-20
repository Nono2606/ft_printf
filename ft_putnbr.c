/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:51:11 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/19 16:10:54 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n, int base, int uppercase)
{
	char	*basec;
	int		count;

	count = 0;
	if (uppercase)
		basec = "0123456789ABCDEF";
	else
		basec = "0123456789abcdef";
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= base)
		count += ft_putnbr((n / base), base, uppercase);
	count += ft_putchar(basec[n % base]);
	return (count);
}
