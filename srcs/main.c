#include "../Includes/push_swap.h"

int	error(void)
{
	printf("Error\n");
	return (1);
}

int free_exit(t_stacks *stacks)
{
	free(stacks->stack_a);
	free(stacks->stack_b);
	free(stacks);
	return (0);
}

void	free_splits(char **chain, int i)
{
	while (--i >= 0)
		free(chain[i]);
	free(chain);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(t_stacks *));
	if (parsing(argc, argv, stacks))
		return (error());
	free_exit(stacks);
}
