/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:35:31 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/29 22:00:37 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_len_base(unsigned long n, char *base)
{
	size_t	len;
	size_t	nb_base;
	size_t	initial_base;

	nb_base = ft_strlen(base);
	len = 0;
	initial_base = nb_base;
	while ((n / nb_base) >= initial_base)
	{
		nb_base *= initial_base;
		len++;
	}
	return (len);
}

static void	ft_fill_base(unsigned long n, char *str, char *base)
{
	unsigned long	mod;
	size_t			nb_base;
	size_t			initial_base;
	int				i;

	nb_base = ft_strlen(base);
	initial_base = nb_base;
	i = 0;
	while ((n / nb_base) >= initial_base)
		nb_base *= initial_base;
	while (nb_base)
	{
		mod = n % nb_base;
		n = (n - mod) / nb_base;
		str[i] = base[n];
		nb_base /= initial_base;
		n = mod;
		i++;
	}
}

char	*ft_itoa_base(unsigned long n, char *base)
{
	char	*str;
	size_t	len_base;
	size_t	nb_base;
	int		i;

	len_base = ft_get_len_base(n, base);
	nb_base = ft_strlen(base);
	str = ft_calloc(len_base + 3, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (n < nb_base)
		str[i] = base[n];
	else
		ft_fill_base(n, str, base);
	return (str);
}
