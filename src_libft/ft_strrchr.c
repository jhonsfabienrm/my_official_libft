/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:12:04 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/11 08:51:28 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s_char;

	s_char = (char *)s;
	i = ft_strlen(s_char);
	if (s_char[i] == '\0' && (char )c == 0)
		return (s_char + i);
	while (i >= 0)
	{
		if (s_char[i] == (char )c)
			return (s_char + i);
		i--;
	}
	return (NULL);
}
