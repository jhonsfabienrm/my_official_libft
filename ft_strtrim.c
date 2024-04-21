/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:42:32 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/07 11:04:25 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	search_beginning(char *s1, char *set)
{
	size_t	index;

	if (!s1 || !set)
		return (0);
	index = 0;
	while (ft_strchr(set, s1[index]))
		index++;
	if (index == ft_strlen(s1))
		return (0);
	return (index);
}

static size_t	search_ending(char *s1, char *set)
{
	size_t	index;

	if (!s1 || !set)
		return (0);
	index = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[index]))
		index--;
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		start;
	size_t		end;
	char		*trimmed;

	start = search_beginning((char *)s1, (char *)set);
	end = search_ending((char *)s1, (char *)set);
	if (!((char *)s1))
		len = 1;
	else
		len = end - start + 1;
	trimmed = ft_substr((char *)s1, (unsigned int )start, len);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}
