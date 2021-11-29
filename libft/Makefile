SRCS	= ft_isdigit.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_memset.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strrchr.c \
	ft_strchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_substr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_calloc.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_split.c \
	ft_strndup.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_minmax.c

SOBJS	= ${SRCS:.c=.o}

BONUS	= ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \

BOBJS	= ${BONUS:.c=.o}

ifdef MAKEBONUS

	OBJS = ${SOBJS} ${BOBJS}

else

	OBJS = ${SOBJS}

endif

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

#rules

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
		rm -f ${SOBJS}
		rm -f ${BOBJS}

fclean:		clean
		rm -f ${NAME}

re:			fclean all

bonus:
		make MAKEBONUS=1 all

.PHONY:	all clean fclean re
