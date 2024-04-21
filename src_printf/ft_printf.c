/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 06:04:40 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/03 09:19:26 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	point;
	int		nb;
	int		index;

	nb = 0;
	index = 0;
	va_start(point, str);
	while (str[index])
	{
		if (str[index] == '%')
		{
			index++;
			if (str[index] == '%')
				ft_printchar('%', &nb);
			else if (str[index] == 'c')
				ft_printchar(va_arg(point, int), &nb);
			else
				ft_percent_scan(str, point, &nb, &index);
		}
		else
			ft_printchar(str[index], &nb);
		index++;
	}
	va_end(point);
	return (nb);
}
