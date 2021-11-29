SRCS		=	ft_printf.c \
				ft_handle_format.c \
				ft_printchar.c \
				ft_printstr.c \
				ft_printptr.c \
				ft_printnbr.c \
				ft_printbase.c \

LIBFT		=	libft.a

OBJS		=	${SRCS:.c=.o}

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

NAME		= libftprintf.a

#rules

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS} ${LIBFT}

all:		${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:			fclean all

bonus:
		echo "no additionnal file to compile for bonus"

.PHONY: all clean fclean re
