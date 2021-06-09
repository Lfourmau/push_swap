#include "../Includes/push_swap.h"

int	error(void)
{
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int i = 0;

	if (parsing(argc, argv, &stacks))
		return (error());

	while (i <= stacks.stack_a.max_index)
	{
		printf("[%d]\n", stacks.stack_a.stack[i]);
		i++;
	}
	stack_a_to_b(&stacks);
	i = 0;
	while (i <= stacks.stack_b.max_index)
	{
		printf("{%d}\n", stacks.stack_b.stack[i]);
		i++;
	}
	printf("--------\n");
	ss(&stacks);
	i = 0;
	while (i <= stacks.stack_a.max_index)
	{
		printf("[%d]\n", stacks.stack_a.stack[i]);
		i++;
	}
	stack_a_to_b(&stacks);
	i = 0;
	while (i <= stacks.stack_b.max_index)
	{
		printf("{%d}\n", stacks.stack_b.stack[i]);
		i++;
	}
	// free_exit(stacks); necessaire pour regler les 3 derniers leaks, mais dit qu'on modifie un evaleur apres l'avoir free.
}
