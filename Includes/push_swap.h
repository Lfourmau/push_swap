#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stacks
{
	int	*stack_a;
	int	*stack_b;
}	t_stacks;

int	parsing(int argc, char **argv, t_stacks stacks);
int	full_digits_check(int argc, char **argv);
char **single_arg_operations(int *argc, char **argv);

#endif