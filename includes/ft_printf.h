/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramihaj <jramihaj@student.42tana.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:24:03 by jramihaj          #+#    #+#             */
/*   Updated: 2024/04/04 10:09:03 by jramihaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# include "libft.h"
# include <stdarg.h>

typedef struct s_format
{
	size_t	width;
	size_t	precision;
	char	flag;
	char	spec;
}	t_format;

int			ft_printf(const char *str, ...);
void		ft_printchar(int c, int *nb);
void		ft_printstring(char *str, int *nb);
void		ft_percent_scan(const char *str, va_list point, int *nb, int *i);
char		ft_get_spec(const char *str);
char		*ft_get_string(va_list point, char spec);
char		*ft_get_str(va_list point);
char		*ft_get_address(va_list point);
char		*ft_get_int(va_list point);
char		*ft_get_uint(va_list point);
char		*ft_get_hexa(va_list point, char *hexa_base);
char		ft_get_flag(const char *str, int *index);
size_t		ft_get_width(const char *str, int *index);
size_t		ft_get_precision(const char *str, char *str_original,
				int *index, char spec);
void		ft_take_all(t_format formats, int *nb, char spec, char *str_init);
void		ft_take_char(va_list point, t_format formats, int *nb);
void		ft_take_str(t_format formats, int *nb, char *str_init);
void		ft_take_address(t_format formats, int *nb, char *str_init);
void		ft_take_int(t_format formats, int *nb, char *str_init);
void		ft_take_uint(t_format formats, int *nb, char *str_init);
void		ft_take_hexa(t_format formats, int *nb, char *str_init);
char		*ft_itoa_base(unsigned long n, char *base);
size_t		ft_atoi_u(const char *str);
char		*ft_width_mng(size_t width, char *str);
int			ft_isflag(int c);
void		ft_minus_flag(char *str);
void		ft_zero_flag(char *str);
void		ft_apply_flag_char(char *str, char flag);
void		ft_apply_flag_str(char *str, char flag, size_t initial_len);
void		ft_apply_flag_address(char *str, char flag);
void		ft_apply_flag_int(char *str, char flag);
void		ft_apply_flag_uint(char *str, char flag);
void		ft_apply_flag_hexa(char *str, char flag);

#endif
