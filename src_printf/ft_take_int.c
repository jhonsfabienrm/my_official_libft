/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_int_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 02:12:06 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 10:24:49 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_assign_int(char *str, char *str_flagged, size_t precision)
{
	size_t	len_str;

	len_str = ft_strlen(str);
	if (ft_atoi(str) < 0)
	{
		ft_memset(str_flagged, '-', 1);
		ft_memcpy(str_flagged + (precision - len_str), str, len_str);
		ft_memset(str_flagged + 1, '0', precision - len_str);
	}
	else
	{
		ft_memset(str_flagged, '0', precision - len_str);
		ft_memcpy(str_flagged + precision - len_str, str, len_str);
	}
	return (str_flagged);
}

static char	*ft_precision_int(size_t precision, char *str)
{
	char	*str_flagged;
	size_t	len_str;

	len_str = ft_strlen(str);
	if (precision == 0 && ft_atoi(str) == 0)
		str_flagged = ft_strdup("");
	else if (precision < len_str)
		str_flagged = ft_strdup(str);
	else
	{
		if (ft_atoi(str) < 0)
			precision++;
		str_flagged = ft_calloc(precision + 1, sizeof(char));
		if (!str_flagged)
			return (NULL);
		str_flagged = ft_assign_int(str, str_flagged, precision);
	}
	if (str)
		free(str);
	return (str_flagged);
}

void	ft_take_int(t_format formats, int *nb, char *str_init)
{
	char	*final_str;

	final_str = ft_precision_int(formats.precision, str_init);
	final_str = ft_width_mng(formats.width, final_str);
	if (ft_isflag(formats.flag))
		ft_apply_flag_int(final_str, formats.flag);
	ft_printstring(final_str, nb);
	if (final_str)
		free(final_str);
}
