/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:35:27 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/03 10:03:25 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_get_width(const char *str, int *index)
{
	size_t	width;

	width = 0;
	if (ft_isdigit(str[*index]))
	{
		width = ft_atoi_u(str + *index);
		while (ft_isdigit(str[*index]))
			*index += 1;
	}
	return (width);
}
