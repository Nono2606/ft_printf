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

int	ft_putnbr(long n, int base, int uppercase)
{
	char	*basec;
	int		count;
	long	nb;

	count = 0;
	nb = n;
	if (uppercase)
		basec = "0123456789ABCDEF";
	else
		basec = "0123456789abcdef";
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -n;
	}
	if (nb >= base)
		count += ft_putnbr((nb / base), base, uppercase);
	count += ft_putchar(basec[nb % base]);
	return (count);
}
