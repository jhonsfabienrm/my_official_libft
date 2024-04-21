/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flag_int_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:34:49 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/03 15:04:44 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_zero_flag_int(char *str)
{
	size_t	index;

	index = 0;
	while (str[index] == ' ')
		index++;
	if (str[index] == '-')
	{
		ft_memset(str, '-', 1);
		ft_memset(str + 1, '0', index);
	}
	else
		ft_zero_flag(str);
}

void	ft_apply_flag_int(char *str, char flag)
{
	if (flag == '-')
		ft_minus_flag(str);
	else if (flag == '0')
		ft_zero_flag_int(str);
}
