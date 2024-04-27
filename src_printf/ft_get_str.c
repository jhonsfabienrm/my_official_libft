/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:44:30 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/27 09:52:58 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_str(va_list point)
{
	char	*str;
	char	*string_got;

	str = va_arg(point, char *);
	if (str == NULL)
		string_got = ft_strdup("(null)");
	else
		string_got = ft_strdup(str);
	return (string_got);
}
