/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:40:05 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/11 08:57:50 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_char;
	unsigned char	*s2_char;

	i = 0;
	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	if (!n)
		return (0);
	while (i < n && (s1_char[i] && s2_char[i]))
	{
		if (s1_char[i] != s2_char[i])
			return (s1_char[i] - s2_char[i]);
		i++;
		if (i == n)
			return (s1_char[i - 1] - s2_char[i - 1]);
	}
	return (s1_char[i] - s2_char[i]);
}
