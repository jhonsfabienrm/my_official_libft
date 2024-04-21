/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flag_str_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:16:31 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/31 20:02:10 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_minus_flag_str(char *str, size_t initial_len)
{
	size_t	len_str;

	len_str = ft_strlen(str);
	ft_memmove(str, str + (len_str - initial_len), initial_len);
	ft_memset(str + initial_len, ' ', len_str - initial_len);
}

void	ft_apply_flag_str(char *str, char flag, size_t initial_len)
{
	if (flag == '-')
		ft_minus_flag_str(str, initial_len);
}
