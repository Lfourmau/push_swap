NAME = push_swap

SRCS = 	srcs/parsing/parsing.c \
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
		srcs/algo/sort_funcs.c \


OBJS = $(SRCS:.c=.o)
#OBJS_CHECKER = $(SRCS_CHECKER:.c=.o)

LIBS = libft/libft.a

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

all : _libft $(NAME) 

%.o : %.c Includes/push_swap.h libft/libft.a
	gcc -c $(CFLAGS) $< -o $(<:.c=.o) -g

$(NAME) : $(OBJS) srcs/main.c
	$(MAKE) -C libft/
	gcc $(CFLAGS) -o push_swap $(LIBS) $(OBJS) srcs/main.c

_libft: 
	${MAKE} -C libft/

bonus : $(NAME) bonus/checker.c $(LIBS)
	gcc $(CFLAGS) -o checker $(LIBS) $(OBJS) bonus/checker.c

clean : 
	rm -f $(OBJS)
	cd libft && make clean

fclean : clean
	rm -f $(NAME) $(LIBS)
	rm -f checker

re : fclean all

.PHONY : all clean fclean re
