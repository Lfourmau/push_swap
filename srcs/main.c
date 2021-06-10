#include "../Includes/push_swap.h"

int	error(void)
{
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int			i;

	if (parsing(argc, argv, &stacks))
		return (error());

	i = 0;
	printf("\033[0;31mfirst print of A stack\n\033[0m");
	while (i <= stacks.stack_a.max_index)
	{
		printf("{%d} --", stacks.stack_a.stack[i]);
		i++;
	}
	printf("\n");

	stack_a_to_b(&stacks);

	i = 0;
	printf("\033[0;31mStack b after the copy from a\n\033[0m");
	while (i <= stacks.stack_b.max_index)
	{
		printf("{%d} --", stacks.stack_b.stack[i]);
		i++;
	}
	printf("\n");

	ss(&stacks);

	i = 0;
	printf("\033[0;31mA after ss\n\033[0m");
	while (i <= stacks.stack_a.max_index)
	{
		printf("{%d} --", stacks.stack_a.stack[i]);
		i++;
	}
	printf("\n");

	i = 0;
	printf("\033[0;31mb after ss\n\033[0m");
	while (i <= stacks.stack_b.max_index)
	{
		printf("{%d} --", stacks.stack_b.stack[i]);
		i++;
	}
	printf("\n");

	rr(&stacks);

	i = 0;
	printf("\033[0;31mA after rr\n\033[0m");
	while (i <= stacks.stack_a.max_index)
	{
		printf("{%d} --", stacks.stack_a.stack[i]);
		i++;
	}
	printf("\n");

	i = 0;
	printf("\033[0;31mb after rr\n\033[0m");
	while (i <= stacks.stack_b.max_index)
	{
		printf("{%d} --", stacks.stack_b.stack[i]);
		i++;
	}
	printf("\n");

	rrr(&stacks);

	i = 0;
	printf("\033[0;31mA after rrr\n\033[0m");
	while (i <= stacks.stack_a.max_index)
	{
		printf("{%d} --", stacks.stack_a.stack[i]);
		i++;
	}
	printf("\n");

	i = 0;
	printf("\033[0;31mb after rrr\n\033[0m");
	while (i <= stacks.stack_b.max_index)
	{
		printf("{%d} --", stacks.stack_b.stack[i]);
		i++;
	}
	printf("\n");

	del_front_value(&stacks.stack_b);
	sa(&stacks);
	pb(&stacks);

	i = 0;
	printf("\033[0;31mA after sa and pb\n\033[0m");
	while (i <= stacks.stack_a.max_index)
	{
		printf("{%d} --", stacks.stack_a.stack[i]);
		i++;
	}
	printf("\n");

	i = 0;
	printf("\033[0;31mb after del front and pb\n\033[0m");
	while (i <= stacks.stack_b.max_index)
	{
		printf("{%d} --", stacks.stack_b.stack[i]);
		i++;
	}
	printf("\n");
	// free_exit(stacks); necessaire pour regler les 3 derniers leaks, mais dit qu'on modifie un evaleur apres l'avoir free.
}
