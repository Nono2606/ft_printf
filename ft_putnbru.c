/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:36:19 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/19 16:01:25 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_puthex(unsigned long v)
{
	char	*basec;
	int		count;

	basec = "0123456789abcdef";
	count = 0;
	if (v >= 16)
		count += ft_puthex((v / 16));
	count += ft_putchar(basec[v % 16]);
	return (count);
}

int	ft_putnbrp(unsigned long v)
{
	int	count;

	count = 0;
	if (!v)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthex(v);
	return (count);
}
