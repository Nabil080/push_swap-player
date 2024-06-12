NAME = push_swap


SRCS =	main.c \
		parsing.c \
		inputs.c \
		outputs.c \
		operations.c \
		operations_2.c \
		operations_utils.c \

HEADER = push_swap.h

FLAGS = -Wall -Wextra -Werror -g

LIBFT = libft

all : ${NAME}

${NAME} : ${SRCS:.c=.o}
	make -C ${LIBFT}
	cc $^ ${LIBFT}/libft.a -o $@

%.o : %.c
	cc ${FLAGS} -I ${LIBFT} -c $< -o $@

clean :
	make clean -C ${LIBFT}
	rm -rf ${SRCS:.c=.o}

fclean : clean
	make fclean -C ${LIBFT}
	rm -rf ${NAME}

norm :
	make norm -C ${LIBFT}
	norminette -R CheckForbiddenSourceHeader ${SRCS}
	norminette -R CheckDefine ${HEADER}

test : all
	./${NAME} 2 1 3 6 5 8

error : all
	./${NAME} -2 1 +3 16 5a 8b

re : fclean all
