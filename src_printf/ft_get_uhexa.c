/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_uhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:10:00 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/27 09:53:15 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_uhexa(va_list point)
{
	char			*hexa_base;
	char			*string_got;
	unsigned int	hexa_ui;

	hexa_base = "0123456789ABCDEF";
	hexa_ui = va_arg(point, unsigned int);
	string_got = ft_itoa_base(hexa_ui, hexa_base);
	return (string_got);
}
