/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flag_hexa_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:14:25 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 09:42:21 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_apply_flag_hexa(char *str, char flag)
{
	if (flag == '0')
		ft_zero_flag(str);
	else if (flag == '-')
		ft_minus_flag(str);
}
