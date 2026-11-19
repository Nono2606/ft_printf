/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:31:16 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/19 16:23:17 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <libft.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n, int base, int uppercase);
int	ft_putnbrp(unsigned long v);
int	ft_putnbru(unsigned int n);
int	ft_putstr(char *s);

#endif