#include "../../Includes/push_swap.h"

int push_packs(t_stacks *stacks)
{
    int min;
    int max;
    int nb_elements;
    int i;

    nb_elements = stacks->stack_a.max_index + 1;
    i = 0;
    min = 0;
    max = size_packs(nb_elements);
    printf("nbpacks : %d -- size : %d\n", nb_packs(nb_elements), max);
    while (i <= nb_packs(nb_elements))
    {
        printf("%d -- %d\n", min, max);
        while (closer_number(stacks, min, max) != 1)
            pb(stacks);
        min = max + 1;
        max = min + size_packs(nb_elements);
        i++;
    }
    return (0);
}