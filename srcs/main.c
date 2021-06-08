#include "../Includes/push_swap.h"

int	error(void)
{
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.stack_a = malloc(argc);
	stacks.stack_b = malloc(argc);
	if (parsing(argc, argv, stacks))
		return (error());
}
