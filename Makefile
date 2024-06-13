NAME = push_swap

SRCS_NAMES =	main.c \
				parsing.c \
				inputs.c \
				outputs.c \
				operations.c \
				operations_2.c \
				operations_utils.c \

SRCS = ${addprefix srcs/, ${SRCS_NAMES}}

OBJS = ${addprefix objs/, ${SRCS_NAMES:.c=.o}}

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

test : all
	./${NAME} 2 1 3 6 5 8

error : all
	./${NAME} -2 1 +3 16 5a 8b

sort : all
	./${NAME} 1 2 3 4 5 6

re : fclean all
