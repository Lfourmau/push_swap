#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# define INT_MAX 2147483647
# define INT_MIN -2147483648

int	parsing(int argc, char **argv);
int	full_digits_check(int argc, char **argv);

typedef struct s_piles
{
	t_list *stack_a;
	t_list *stack_b;
}	t_piles;

#endif