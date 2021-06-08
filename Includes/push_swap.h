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
	int	max_index;
}	t_stacks;

//PARSING FUNCS
int		parsing(int argc, char **argv, t_stacks *stacks);
int		full_digits_check(int argc, char **argv, int start);
char	**single_arg_operations(int *argc, char **argv);

//FREE/MALLOC FUNCS
void	free_splits(char **chain, int i);
int		free_exit(t_stacks *stacks);
int		malloc_stacks(t_stacks *stacks, int start, int argc);

#endif