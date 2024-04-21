/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_scan_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:56 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 05:14:37 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_percent_scan(const char *str, va_list point, int *nb, int *i)
{
	t_format	formats;
	char		*str_original;

	formats.spec = ft_get_spec(str + *i);
	formats.flag = ft_get_flag(str, i);
	formats.width = ft_get_width(str, i);
	if (formats.spec == 'c')
	{
		ft_take_char(point, formats, nb);
		str_original = NULL;
	}
	else
	{
		str_original = ft_get_string(point, formats.spec);
		formats.precision = ft_get_precision(str,
				str_original, i, formats.spec);
		ft_take_all(formats, nb, formats.spec, str_original);
	}
}
