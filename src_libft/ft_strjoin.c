/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:22:47 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/11 08:14:38 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_all;

	s_all = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!s_all)
		return (NULL);
	ft_strlcpy(s_all, s1, ft_strlen(s1) + 1);
	ft_strlcat(s_all, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (s_all);
}
