/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:07:53 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/11 08:45:39 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_char;

	s_char = (char *)s;
	while (*s_char)
	{
		if (*s_char == (char )c)
			return (s_char);
		s_char++;
	}
	if (*s_char == '\0' && (char )c == 0)
		return (s_char);
	return (NULL);
}
