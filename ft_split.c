/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 08:38:47 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/11 10:18:16 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search_word_nb(char const *s, char c)
{
	int		count;
	size_t	i;
	size_t	i_temp;
	size_t	len_s;

	count = 0;
	i = 0;
	len_s = ft_strlen(s);
	if (!*(char *)s)
		return (0);
	if (!c && *(char *)s)
		return (1);
	while (i < len_s)
	{
		while ((char )s[i] == c && i < len_s)
			i++;
		i_temp = i;
		while ((char )s[i] != c && i < len_s)
			i++;
		if (i > i_temp)
			count++;
	}
	return (count);
}

static void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static void	fill_str(char **str, const char *s, char c, int i)
{
	if (!ft_strchr(s, c))
		str[i] = ft_substr(s, 0, ft_strlen(s));
	else
		str[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	str = ft_calloc(search_word_nb(s, c) + 1, sizeof(char *));
	i = 0;
	if (!s || !str)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			fill_str(str, s, c, i);
			if (!str[i])
			{
				free_all(str);
				return (NULL);
			}
			s += ft_strlen(str[i]);
		}
		i++;
	}
	return (str);
}
