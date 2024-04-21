/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_mng_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 08:23:06 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 10:25:24 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_width_mng(size_t width, char *str)
{
	char	*str_widthed;
	size_t	len_str;

	len_str = ft_strlen(str);
	if (width <= len_str)
		str_widthed = ft_strdup(str);
	else
	{
		str_widthed = ft_calloc(width + 1, sizeof(char));
		if (!str_widthed)
			return (NULL);
		ft_memset(str_widthed, ' ', width - len_str);
		ft_memcpy(str_widthed + (width - len_str), str, len_str);
	}
	if (str)
		free(str);
	return (str_widthed);
}
