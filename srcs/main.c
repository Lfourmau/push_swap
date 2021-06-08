#include "../Includes/push_swap.h"

int	error(void)
{
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;
	int i = 0;

	stacks = malloc(sizeof(t_stacks *));
	if (parsing(argc, argv, stacks))
	{
		free_exit(stacks);
		return (error());
	}
	while (i <= stacks->max_index)
	{
		printf("%d\n", stacks->stack_a[i]);
		i++;
	}
	// free_exit(stacks); necessaire pour regler les 3 derniers leaks, mais dit qu'on modifie un evaleur apres l'avoir free.
}
