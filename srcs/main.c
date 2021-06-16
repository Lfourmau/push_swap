#include "../Includes/push_swap.h"

int	error(void)
{
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int			i = 0;

	if (parsing(argc, argv, &stacks))
		return (error());
	if (replace_values(&stacks.stack_a))
		return (error());
	push_packs_to_b(&stacks);
	push_back_to_a(&stacks);
	while (i <= stacks.stack_a.max_index)
	{
		printf("%d\n", stacks.stack_a.stack[i]);
		i++;
	}
	// free_exit(stacks); necessaire pour regler les 3 derniers leaks, mais dit qu'on modifie une valeur apres l'avoir free.
}
