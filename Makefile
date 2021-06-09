NAME = push_swap

SRCS = 	srcs/main.c \
		srcs/parsing/parsing.c \
		srcs/parsing/single_string_arg.c \
		srcs/memory_fct/free_funcs.c \
		srcs/memory_fct/malloc_fct.c \
		srcs/memory_fct/copy_funcs.c \
		srcs/swap/swap_fct.c \

OBJS = $(SRCS:.c=.o)

LIBS = libft.a

CFLAGS = #-Wall -Wextra -Werror

all : $(NAME)

%.o : %.c Includes/push_swap.h
	gcc -c $(CFLAGS) $< -o $(<:.c=.o) -g

$(NAME) : $(OBJS)
	cd libft && make bonus && cd ..
	mv libft/libft.a .
	gcc $(CFLAGS) -o push_swap $(LIBS) $(OBJS)

clean : 
	rm -f $(OBJS)
	cd libft && make clean

fclean : clean
	rm -f $(NAME) $(LIBS)

re : fclean all

.PHONY : all clean fclean re