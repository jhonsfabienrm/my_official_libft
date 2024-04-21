/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flag_uint_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:58:34 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/29 06:42:39 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_apply_flag_uint(char *str, char flag)
{
	if (flag == '-')
		ft_minus_flag(str);
	else if (flag == '0')
		ft_zero_flag(str);
}
