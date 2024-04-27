/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:24:03 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/27 09:53:44 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>

char	*ft_get_str(va_list point);
char	*ft_get_address(va_list point);
char	*ft_get_int(va_list point);
char	*ft_get_uint(va_list point);
char	*ft_get_lhexa(va_list point);
char	*ft_get_uhexa(va_list point);
char	*ft_itoa_base(unsigned long n, char *base);
void	ft_printchar(int c, int *nb);
void	ft_scan_print(char spec, va_list point, int *nb);
char	*ft_get_string(va_list point, char spec);
void	ft_printstring(char *str, int *nb);
int		ft_printf(const char *str, ...);

#endif
