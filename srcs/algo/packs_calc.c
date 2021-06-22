#include "../../Includes/push_swap.h"

int	my_sqrt(int nb_elements)
{
	int	i;

	i = 0;
	while (i * i < nb_elements)
		i++;
	return (i);
}

int	nb_packs(int nb_elements)
{
	return (my_sqrt(nb_elements) / 2);
}

int	size_packs(int nb_elements)
{
	return (nb_elements / nb_packs(nb_elements));
}
