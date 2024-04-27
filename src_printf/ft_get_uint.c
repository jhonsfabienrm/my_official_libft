/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:58:45 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/27 09:53:25 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_uint(va_list point)
{
	char			*string_got;
	char			*decimal_base;
	unsigned int	nb;

	nb = va_arg(point, unsigned int);
	decimal_base = "0123456789";
	string_got = ft_itoa_base(nb, decimal_base);
	return (string_got);
}
