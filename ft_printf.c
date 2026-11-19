/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:01:05 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/19 16:08:25 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
%c Prints a single character.
%s Prints a string (as defined by the common C convention).
%p The void * pointer argument has to be printed in hexadecimal format.
%d Prints a decimal (base 10) number.
%i Prints an integer in base 10.
%u Prints an unsigned decimal (base 10) number.
%x Prints a number in hexadecimal (base 16) lowercase format.
%X Prints a number in hexadecimal (base 16) uppercase format.
%% Prints a percent sign.
*/

static int	handle_format(char c, va_list value)
{
	if (c == 'c')
		return (ft_putchar(va_arg(value, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr((va_arg(value, int)), 10, 0));
	else if (c == 's')
		return (ft_putstr(va_arg(value, char *)));
	else if (c == 'x')
		return (ft_putnbr(va_arg(value, int), 16, 0));
	else if (c == 'X')
		return (ft_putnbr(va_arg(value, int), 16, 1));
	else if (c == 'u')
		return (ft_putnbru(va_arg(value, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (ft_putnbrp(va_arg(value, unsigned long)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			count += handle_format(*++format, ap);
			format++;
			continue ;
		}
		count++;
		ft_putchar(*format++);
	}
	va_end(ap);
	return (count);
}
