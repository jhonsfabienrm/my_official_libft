
NAME = libft.a

SRC_LIBFT = src_libft/ft_isalpha.c src_libft/ft_isdigit.c src_libft/ft_isalnum.c src_libft/ft_isascii.c\
			src_libft/ft_isprint.c src_libft/ft_strlen.c src_libft/ft_memset.c src_libft/ft_bzero.c\
			src_libft/ft_memcpy.c src_libft/ft_memmove.c src_libft/ft_strlcpy.c src_libft/ft_strlcat.c\
			src_libft/ft_toupper.c src_libft/ft_tolower.c src_libft/ft_strchr.c src_libft/ft_strrchr.c\
			src_libft/ft_strncmp.c src_libft/ft_memchr.c src_libft/ft_memcmp.c src_libft/ft_strnstr.c\
			src_libft/ft_atoi.c src_libft/ft_calloc.c src_libft/ft_strdup.c src_libft/ft_substr.c\
			src_libft/ft_strjoin.c src_libft/ft_strtrim.c src_libft/ft_split.c src_libft/ft_itoa.c\
			src_libft/ft_strmapi.c src_libft/ft_striteri.c src_libft/ft_putchar_fd.c src_libft/ft_putstr_fd.c\
			src_libft/ft_putendl_fd.c src_libft/ft_putnbr_fd.c src_libft/ft_lstnew.c src_libft/ft_lstadd_front.c\
			src_libft/ft_lstsize.c src_libft/ft_lstlast.c src_libft/ft_lstadd_back.c src_libft/ft_lstdelone.c\
			src_libft/ft_lstclear.c src_libft/ft_lstiter.c src_libft/ft_itoa_base.c src_libft/ft_atoi_u.c

SRC_PRINTF = src_printf/ft_printf.c src_printf/ft_printchar.c src_printf/ft_printstring.c\
			src_printf/ft_percent_scan.c src_printf/ft_get_spec.c src_printf/ft_get_string.c\
			src_printf/ft_get_str.c src_printf/ft_get_address.c	src_printf/ft_get_int.c	src_printf/ft_get_uint.c\
			src_printf/ft_get_hexa.c src_printf/ft_get_flag.c src_printf/ft_get_width.c\
			src_printf/ft_get_precision.c	src_printf/ft_take_all.c src_printf/ft_take_char.c\
			src_printf/ft_take_str.c src_printf/ft_take_address.c src_printf/ft_take_int.c\
			src_printf/ft_take_uint.c src_printf/ft_take_hexa.c	src_printf/ft_width_mng.c src_printf/ft_isflag.c\
			src_printf/ft_minus_flag.c src_printf/ft_zero_flag.c src_printf/ft_apply_flag_char.c\
			src_printf/ft_apply_flag_str.c src_printf/ft_apply_flag_address.c src_printf/ft_apply_flag_int.c\
			src_printf/ft_apply_flag_uint.c	src_printf/ft_apply_flag_hexa.c

OBJ_LIBFT = ${SRC_LIBFT:.c=.o}

OBJ_PRINTF = ${SRC_PRINTF:.c=.o}

FLAGS = -Wall -Werror -Wextra

all : ${NAME}

${NAME} : ${OBJ_LIBFT} ${OBJ_PRINTF}
	ar rcs ${NAME} ${OBJ_LIBFT} ${OBJ_PRINTF}

%.o : %.c
	cc ${FLAGS} -o $@ -c $< -I includes/

clean :
	rm -f ${OBJ_LIBFT} ${OBJ_PRINTF}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : clean fclean re
