/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:41:30 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 05:14:56 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_get_precision(const char *str, char *str_original,
		int *index, char spec)
{
	size_t	precision;
	size_t	len_str;

	len_str = ft_strlen(str_original);
	if (ft_atoi(str_original) && (spec == 'd' || spec == 'i'))
		precision = 1;
	else
		precision = len_str;
	if (str[*index] == '.')
	{
		*index += 1;
		precision = ft_atoi_u(str + *index);
		while (ft_isdigit(str[*index]))
			*index += 1;
	}
	return (precision);
}
