/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:57:20 by jramihaj          #+#    #+#             */
/*   Updated: 2024/03/07 11:08:25 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search_len(int n)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (n < 0)
	{
		n *= -1;
		j++;
	}
	while ((n / i) >= 10)
	{
		i *= 10;
		j++;
	}
	return (j);
}

void	fill_nb_str(char *str, int n)
{
	int		i;
	int		mod;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		*str = '-';
		str++;
	}
	while ((n / i) >= 10)
		i *= 10;
	while (i >= 1)
	{
		mod = n % i;
		n = (n - mod) / i;
		*str = n + '0';
		i /= 10;
		n = mod;
		str++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	else
	{
		str = ft_calloc(search_len(n) + 1, sizeof(char));
		if (!str)
			return (NULL);
		fill_nb_str(str, n);
	}
	return (str);
}
