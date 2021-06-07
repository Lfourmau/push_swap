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
	if (argc == 1)
		return (1);
	if (argc == 2)
		argv = single_arg_operations(&argc, argv);
	printf("argv[0] = %s\n", argv[0]);
	if (parsing(argc, argv, stacks))
		return (error());
}
