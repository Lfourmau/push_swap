#include "../../Includes/push_swap.h"

int	is_sorted(t_onestack stack)
{
	int	i;

	i = 0;
	while (i < stack.max_index)
	{
		if (stack.stack[i] > stack.stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}
