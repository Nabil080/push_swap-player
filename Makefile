NAME = push_swap

SRCS =	main.c \

HEADER = push_swap.h

FLAGS = -Wall -Wextra -Werror

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

test : re
	valgrind ./${NAME}

re : fclean all
