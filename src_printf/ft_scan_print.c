/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scan_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:25:51 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/27 09:54:03 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_scan_print(char spec, va_list point, int *nb)
{
	char	*string_got;

	string_got = ft_get_string(point, spec);
	ft_printstring(string_got, nb);
	if (string_got)
		free(string_got);
}
