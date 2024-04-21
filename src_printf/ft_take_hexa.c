/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_hexa_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 02:25:54 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 10:24:36 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_precision_hexa(size_t precision, char *str)
{
	char	*str_flagged;
	size_t	len_str;

	len_str = ft_strlen(str);
	if (precision == 0 && !ft_strncmp(str, "0", len_str))
		str_flagged = ft_strdup("");
	else if (precision < len_str)
		str_flagged = ft_strdup(str);
	else
	{
		str_flagged = ft_calloc(precision + 1, sizeof(char));
		if (!str_flagged)
			return (NULL);
		ft_memset(str_flagged, '0', precision - len_str);
		ft_memcpy(str_flagged + (precision - len_str), str, len_str);
	}
	if (str)
		free(str);
	return (str_flagged);
}

void	ft_take_hexa(t_format formats, int *nb, char *str_init)
{
	char			*final_str;

	final_str = ft_precision_hexa(formats.precision, str_init);
	final_str = ft_width_mng(formats.width, final_str);
	ft_apply_flag_hexa(final_str, formats.flag);
	ft_printstring(final_str, nb);
	if (final_str)
		free(final_str);
}
