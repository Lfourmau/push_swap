#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_onestack
{
	int	*stack;
	int	max_index;
}	t_onestack;

typedef struct s_stacks
{
	t_onestack stack_a;
	t_onestack stack_b;
}	t_stacks;

//PARSING FUNCS
int		parsing(int argc, char **argv, t_stacks *stacks);
int		full_digits_check(int argc, char **argv, int start);
char	**single_arg_operations(int *argc, char **argv);

//MEMORY FUNCS
void	free_splits(char **chain, int i);
int		free_exit(t_stacks *stacks);
int		malloc_stacks(t_stacks *stacks, int start, int argc);
void	stack_a_to_b(t_stacks *stacks);
void	stack_b_to_a(t_stacks *stacks);
void	copy_tab(int *dest, int *src, int start_src, int maxindex, int start_dst);

//SWAP FUNCS
void	sa(t_stacks *stacks);
void   	sb(t_stacks *stacks);
void    ss(t_stacks *stacks);

//PUSH FUNCS
int		add_front_slot(t_onestack *stack, int value);
int		del_front_value(t_onestack *stack);
int    	pa(t_stacks *stacks);
int    	pb(t_stacks *stacks);

#endif