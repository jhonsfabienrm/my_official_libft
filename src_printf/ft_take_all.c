/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_all_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:17:49 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/03 04:49:08 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_take_all(t_format formats, int *nb, char spec, char *str_init)
{
	if (spec == 's')
		ft_take_str(formats, nb, str_init);
	else if (spec == 'p')
		ft_take_address(formats, nb, str_init);
	else if (spec == 'd' || spec == 'i')
		ft_take_int(formats, nb, str_init);
	else if (spec == 'u')
		ft_take_uint(formats, nb, str_init);
	else if (spec == 'x' || spec == 'X')
		ft_take_hexa(formats, nb, str_init);
}
