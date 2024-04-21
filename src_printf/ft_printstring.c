/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 06:25:27 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/31 22:43:18 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printstring(char *str, int *nb)
{
	*nb += ft_strlen(str);
	ft_putstr_fd(str, 1);
}
