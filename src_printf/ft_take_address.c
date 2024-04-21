/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_address_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 02:03:32 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/03 14:57:29 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_take_address(t_format formats, int *nb, char *str_init)
{
	char	*final_str;

	final_str = ft_width_mng(formats.width, str_init);
	ft_apply_flag_address(final_str, formats.flag);
	ft_printstring(final_str, nb);
	if (final_str)
		free(final_str);
}
