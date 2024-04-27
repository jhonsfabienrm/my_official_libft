/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:55:14 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/27 09:50:04 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_int(va_list point)
{
	char	*string_got;
	int		int_got;

	int_got = va_arg(point, int);
	string_got = ft_itoa(int_got);
	return (string_got);
}
