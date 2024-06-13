NAME = push_swap

SRCS_NAMES =	main \
				parsing \
				inputs \
				outputs \
				operations \
				operations_2 \
				operations_utils \

SRCS = ${addprefix srcs/, ${addsuffix .c, ${SRCS_NAMES}}}

OBJS = ${addprefix objs/, ${addsuffix .o, ${SRCS_NAMES}}}

HEADER = push_swap.h

FLAGS = -Wall -Wextra -Werror

LIBFT = libft

all : ${NAME}

${NAME} : ${OBJS}
	make -C ${LIBFT}
	cc $^ ${LIBFT}/libft.a -o $@

${OBJS}:
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

sort : all
	./${NAME} 1 2 3 4 5 6

re : fclean all
