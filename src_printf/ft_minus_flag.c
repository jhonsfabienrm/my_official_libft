/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_flag_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:44:57 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/30 11:56:42 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_minus_flag(char *str)
{
	size_t	index;
	size_t	len_str;

	index = 0;
	while (str[index] == ' ')
		index++;
	len_str = ft_strlen(str);
	ft_memmove(str, str + index, len_str - index);
	ft_memset(str + (len_str - index), ' ', index);
}
