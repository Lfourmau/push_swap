#include "../Includes/push_swap.h"

int	error(void)
{
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	if (parsing(argc, argv))
		return (error());
}
