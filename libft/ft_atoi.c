/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:40:19 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 12:10:18 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function makes it possible to transform a string, 
representing an integer value, into a numeric value of type int.*/

int	ft_atoi(const char *str)
{
	long	value;
	int		neg;

	value = 0;
	neg = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return ((int)(value *= neg));
}
