/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:40:01 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/29 20:02:19 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_atoi_u(const char *str)
{
	size_t	nb;

	nb = 0;
	if (!ft_isdigit(*str))
		return (0);
	while (ft_isdigit(*str))
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	return (nb);
}
