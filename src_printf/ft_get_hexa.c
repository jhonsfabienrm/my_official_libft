/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hexa_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:10:00 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/02 21:29:53 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_hexa(va_list point, char *hexa_base)
{
	char			*string_got;
	unsigned int	hexa_ui;

	hexa_ui = va_arg(point, unsigned int);
	string_got = ft_itoa_base(hexa_ui, hexa_base);
	return (string_got);
}
