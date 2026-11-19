/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:38:53 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/19 16:15:41 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	puthex(unsigned long v)
{
	char	*basec;
	int		count;

	basec = "0123456789abcdef";
	count = 0;
	if (v >= 16)
		count += puthex((v / 16));
	count += ft_putchar(basec[v % 16]);
	return (count);
}

int	ft_putnbrp(unsigned long v)
{
	int	count;

	if (!v)
		return (ft_putstr("(nil)"));
	count = 0;
	count += ft_putstr("0x");
	count += puthex(v);
	return (count);
}
