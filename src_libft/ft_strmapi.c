/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:55:50 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/06 07:21:34 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_char;
	char			*mapi;

	i = 0;
	s_char = (char *)s;
	mapi = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!mapi)
		return (NULL);
	while (s_char[i])
	{
		mapi[i] = f(i, s_char[i]);
		i++;
	}
	return (mapi);
}
