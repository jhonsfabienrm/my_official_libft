/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_spec_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:02:33 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/03 05:15:00 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_get_spec(const char *str)
{
	if (ft_isflag(*str))
		str++;
	while (ft_isdigit(*str))
		str++;
	if (*str == '.')
	{
		str++;
		while (ft_isdigit(*str))
			str++;
	}
	return (*str);
}
