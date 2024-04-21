/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:41:10 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/29 06:43:10 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero_flag(char *str)
{
	size_t	index;

	index = 0;
	while (str[index] == ' ')
		index++;
	ft_memset(str, '0', index);
}
