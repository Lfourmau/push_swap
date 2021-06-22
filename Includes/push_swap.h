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
	t_onestack	stack_a;
	t_onestack	stack_b;
}	t_stacks;

//PARSING FUNCS
int		parsing(int argc, char **argv, t_stacks *stacks);
int		full_digits_check(int argc, char **argv, int start);
char	**single_arg_operations(int *argc, char **argv);

//ARRAY MANIPS
int		add_front_slot(t_onestack *stack, int value);
int		del_front_value(t_onestack *stack);
int		del_back_value(t_onestack *stack);
int		add_back_slot(t_onestack *stack, int value);
void	sort_tab(int *tab, int size);
int		replace_values(t_onestack *stack);

//MEMORY FUNCS
void	free_splits(char **chain, int i);
int		free_exit(t_stacks *stacks);
int		malloc_stacks(t_stacks *stacks, int start, int argc);
void	stack_a_to_b(t_stacks *stacks);
void	stack_b_to_a(t_stacks *stacks);
void	copy_tab(int *dest, t_onestack *stack, int start_dst, int start_src);

//SWAP FUNCS
void	sa(t_stacks *stacks, int print);
void	sb(t_stacks *stacks, int print);
void	ss(t_stacks *stacks, int print);

//PUSH FUNCS
int		pa(t_stacks *stacks, int print);
int		pb(t_stacks *stacks, int print);

//ROTATE FUNCS
int		ra(t_stacks *stacks, int print);
int		rb(t_stacks *stacks, int print);
int		rr(t_stacks *stacks, int print);

//REVERSE ROTATE FUNCS
int		rra(t_stacks *stacks, int print);
int		rrb(t_stacks *stacks, int print);
int		rrr(t_stacks *stacks, int print);

//COMPARE FUNCS
int		is_smaller(int nb1, int nb2);
int		is_sorted(t_onestack stack);

//PACKS
int		my_sqrt(int nb_elements);
int		nb_packs(int nb_elements);
int		size_packs(int nb_elements);
int		push_packs_to_b(t_stacks *stacks);
int		push_back_to_a(t_stacks *stacks);
int		bring_top_a(t_stacks *stacks, int min, int max);

//SORT FCT
void	big_list(t_stacks *stacks);
int		check_three_list_a(t_stacks *stacks);
void	three_list_a(t_stacks *stacks);
void	five_list_a(t_stacks *stacks);
void	two_list_a(t_stacks *stacks);
#endif