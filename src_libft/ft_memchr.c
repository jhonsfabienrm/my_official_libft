/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:33:50 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/11 09:05:38 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_char;

	s_char = (unsigned char *)s;
	while (n)
	{
		if (*s_char == (unsigned char )c)
			return (s_char);
		n--;
		s_char++;
	}
	return (NULL);
}
