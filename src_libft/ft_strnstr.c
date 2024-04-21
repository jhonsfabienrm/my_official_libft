/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:24:20 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/11 09:10:47 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		check;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (!little[i])
		return ((char *)big);
	if (len < little_len)
		return (NULL);
	while (big[i] && i <= len - little_len)
	{
		if (big[i] == *little)
		{
			check = ft_strncmp(big + i, little, little_len);
			if (check == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
