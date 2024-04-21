/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_str_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 01:33:28 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 10:25:02 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_precision_str(size_t precision, char *str)
{
	size_t	len_str;
	char	*str_init;

	len_str = ft_strlen(str);
	if (ft_strnstr(str, "(null)", len_str))
	{
		if (precision < 6)
			str_init = ft_strdup("");
		else
			str_init = ft_strdup("(null)");
	}
	else
	{
		if (precision > len_str)
			precision = len_str;
		str_init = ft_calloc(precision + 1, sizeof(char));
		if (!str_init)
			return (NULL);
		ft_memcpy(str_init, str, precision);
	}
	if (str)
		free(str);
	return (str_init);
}

void	ft_take_str(t_format formats, int *nb, char *str_init)
{
	char	*final_str;
	size_t	len_init;

	final_str = ft_precision_str(formats.precision, str_init);
	len_init = ft_strlen(final_str);
	final_str = ft_width_mng(formats.width, final_str);
	ft_apply_flag_str(final_str, formats.flag, len_init);
	ft_printstring(final_str, nb);
	if (final_str)
		free(final_str);
}
