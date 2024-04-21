/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:19:18 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/07 10:59:12 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_alloc;

	mem_alloc = malloc(nmemb * size);
	if (!mem_alloc)
		return (NULL);
	ft_bzero(mem_alloc, nmemb * size);
	return (mem_alloc);
}
