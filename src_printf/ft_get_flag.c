/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flag_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 00:28:27 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/01 02:56:08 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_get_flag(const char *str, int *index)
{
	char	flag;

	flag = '\0';
	if (ft_isflag(str[*index]))
	{
		flag = str[*index];
		*index += 1;
	}
	return (flag);
}
