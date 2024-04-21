/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 08:31:09 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/06 09:20:37 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*s_char;

	s_char = (char *)s;
	if ((size_t)start > ft_strlen(s_char))
		start = ft_strlen(s_char);
	if (len > ft_strlen(s_char) - start)
		len = ft_strlen(s_char) - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
