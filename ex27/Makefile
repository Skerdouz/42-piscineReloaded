NAME	=	ft_display_file
SRCS	=	ft_display_file.c
OBJS	=	${SRCS:.c=.o}
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

${NAME}:	${SRCS}
			${CC} ${CFLAGS} -o ${NAME} ${SRCS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean
