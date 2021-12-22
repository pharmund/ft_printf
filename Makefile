SRCS			= ft_printf.c put_char.c put_hex.c \
			 put_nbr.c put_ptr.c put_str.c \
			 put_unsigned_nbr.c utils.c
			 


HEAD		= ft_printf.h

INCLUDES	= ./

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

CC			= cc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror -I${INCLUDES}


%.o: %.c ${HEAD} Makefile
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} $?
			${RN} ${NAME}


.PHONY:		all clean fclean re

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all