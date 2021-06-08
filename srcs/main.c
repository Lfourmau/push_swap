#include "../Includes/push_swap.h"

int	error(void)
{
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (parsing(argc, argv, &stacks))
		return (error());

	int i = 0;
	while (i <= stacks.max_index)
	{
		printf("%d\n", stacks.stack_a[i]);
		i++;
	}
	// free_exit(stacks); necessaire pour regler les 3 derniers leaks, mais dit qu'on modifie un evaleur apres l'avoir free.
}
