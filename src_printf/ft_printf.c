/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 06:04:40 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/28 22:25:46 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	point;
	int		nb;

	nb = 0;
	va_start(point, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				ft_printchar('%', &nb);
			else if (*str == 'c')
				ft_printchar(va_arg(point, int), &nb);
			else
				ft_scan_print(*str, point, &nb);
		}
		else
			ft_printchar(*str, &nb);
		str++;
	}
	va_end(point);
	return (nb);
}
