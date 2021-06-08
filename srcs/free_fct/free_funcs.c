#include "../../Includes/push_swap.h"

void	free_splits(char **chain, int i)
{
	while (--i >= 0)
		free(chain[i]);
	free(chain);
}

int free_exit(t_stacks *stacks ,char **argv)
{
	free(stacks->stack_a);
	free(stacks->stack_b);
	free(stacks);
	return (0);
}