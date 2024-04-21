/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:03:36 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/07 11:00:21 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dupl;

	dupl = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!dupl)
		return (NULL);
	ft_strlcpy(dupl, s, ft_strlen(s) + 1);
	return (dupl);
}
