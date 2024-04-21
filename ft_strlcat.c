/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@42tana.mg>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 06:13:18 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/11 08:38:43 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	j = len_dest;
	if (n <= len_dest)
		return (n + len_src);
	else if (n > len_dest)
	{
		if (n > len_dest + len_src + 1)
			n = len_dest + len_src + 1;
		while (j + 1 < n && src[i] != '\0')
		{
			dest[j] = (char )src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (len_dest + len_src);
}
