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

	// int i = 0;
	// while (i <= stacks.max_index)
	// {
	// 	printf("%d\n", stacks.stack_a[i]);
	// 	i++;
	// }
	// sa(&stacks);
	// printf("//////////////////////////////\n");
	// i = 0;
	// ft_memcpy(stacks.stack_b, stacks.stack_a, stacks.max_index + 2 * 16);
	// while (i <= stacks.max_index)
	// {
	// 	printf("%d\n", stacks.stack_b[i]);
	// 	i++;
	// }
	// free_exit(stacks); necessaire pour regler les 3 derniers leaks, mais dit qu'on modifie un evaleur apres l'avoir free.
}
