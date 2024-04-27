/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:17:49 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/27 09:53:07 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_string(va_list point, char spec)
{
	if (spec == 's')
		return (ft_get_str(point));
	else if (spec == 'p')
		return (ft_get_address(point));
	else if (spec == 'd' || spec == 'i')
		return (ft_get_int(point));
	else if (spec == 'u')
		return (ft_get_uint(point));
	else if (spec == 'x')
		return (ft_get_lhexa(point));
	else if (spec == 'X')
		return (ft_get_uhexa(point));
	return (NULL);
}
