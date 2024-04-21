/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_string_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:17:49 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/02 21:31:59 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_string(va_list point, char spec)
{
	char	*hexa_basel;
	char	*hexa_baseu;

	hexa_basel = "0123456789abcdef";
	hexa_baseu = "0123456789ABCDEF";
	if (spec == 's')
		return (ft_get_str(point));
	else if (spec == 'p')
		return (ft_get_address(point));
	else if (spec == 'd' || spec == 'i')
		return (ft_get_int(point));
	else if (spec == 'u')
		return (ft_get_uint(point));
	else if (spec == 'x' || spec == 'X')
	{
		if (spec == 'x')
			return (ft_get_hexa(point, hexa_basel));
		else
			return (ft_get_hexa(point, hexa_baseu));
	}
	return (NULL);
}
