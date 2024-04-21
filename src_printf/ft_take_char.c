/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_char_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:32:27 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 10:24:23 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_width_mng_char(size_t width, char *str)
{
	char	*str_widthed;
	size_t	len_str;

	if (*str == '\0')
		len_str = 1;
	else
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

static char	*ft_get_char(char c, t_format formats)
{
	char	*string_got;

	if (c == '\0')
		string_got = ft_calloc(1, sizeof(char));
	else
		string_got = ft_calloc(2, sizeof(char));
	*string_got = c;
	string_got = ft_width_mng_char(formats.width, string_got);
	ft_apply_flag_char(string_got, formats.flag);
	return (string_got);
}

void	ft_take_char(va_list point, t_format formats, int *nb)
{
	char	c;
	char	*string_got;

	c = va_arg(point, int);
	string_got = ft_get_char(c, formats);
	if (c == '\0')
	{
		if (formats.flag == '-')
		{
			ft_putchar_fd(c, 1);
			ft_printstring(string_got, nb);
		}
		else
		{
			ft_printstring(string_got, nb);
			ft_putchar_fd(c, 1);
		}
		*nb += 1;
	}
	else
		ft_printstring(string_got, nb);
	if (string_got)
		free(string_got);
}
