NAME = push_swap

SRCS = 	srcs/main.c \
		srcs/parsing/parsing.c \
		srcs/parsing/single_string_arg.c \
		srcs/memory_fct/free_funcs.c \
		srcs/memory_fct/malloc_fct.c \
		srcs/memory_fct/copy_funcs.c \
		srcs/swap/swap_fct.c \
		srcs/push/push_fct.c \
		srcs/rotate/rotate_funcs.c \
		srcs/manip_array/manip_array.c \
		srcs/reverse_rotate/reverse_rotate_fct.c \
		srcs/algo/packs_calc.c \
		srcs/algo/push_packs_to_b.c \
		srcs/algo/replace_values.c \
		srcs/algo/push_back_to_a.c \
		srcs/algo/check_order.c \


OBJS = $(SRCS:.c=.o)

LIBS = libft.a

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

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