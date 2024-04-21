/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 22:08:12 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/06 11:29:49 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elt;

	new_elt = malloc(sizeof(t_list));
	if (!(new_elt))
		return (NULL);
	new_elt->content = content;
	new_elt->next = NULL;
	return (new_elt);
}
