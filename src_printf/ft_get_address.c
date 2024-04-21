/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_address_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:46:19 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 10:23:31 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_address(va_list point)
{
	char			*string_got;
	char			*hexa_p;
	char			*hexa_base;
	void			*p;
	unsigned long	p_ul;

	hexa_base = "0123456789abcdef";
	p = va_arg(point, void *);
	p_ul = (unsigned long )p;
	if (p == NULL)
		string_got = ft_strdup("(nil)");
	else
	{
		hexa_p = ft_itoa_base(p_ul, hexa_base);
		string_got = ft_strjoin("0x", hexa_p);
		if (hexa_p)
			free(hexa_p);
	}
	return (string_got);
}
