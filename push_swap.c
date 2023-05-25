/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:45:09 by iobba             #+#    #+#             */
/*   Updated: 2022/12/19 14:18:27 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicate(int stack[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (stack[i] == stack[j])
				errore();
			j++;
		}
		i++;
	}
}

int	smallest_index(int stack_b[], int top_b)
{
	int	i;
	int	smlst_indx;
	int	smallest;

	i = 0;
	smallest = stack_b[0];
	while (i <= top_b)
	{
		if (stack_b[i] <= smallest)
		{
			smallest = stack_b[i];
			smlst_indx = i;
		}
		i++;
	}
	return (smlst_indx);
}

void	ls_tn_fifteen(int stack_a[], int *top_a, int stack_b[], int *top_b)
{
	int	smallest;
	int	lvr_index;

	while (*top_a >= 3)
	{
		lvr_index = smallest_index(stack_a, *top_a);
		smallest = stack_a[lvr_index];
		if (lvr_index >= (*top_a + 1) / 2)
		{
			while (stack_a[*top_a] != smallest)
				rotate_a(stack_a, *top_a);
		}
		else
		{
			while (stack_a[*top_a] != smallest)
				rotate_reverse_a(stack_a, *top_a);
		}
		push_b(stack_b, top_b, stack_a, top_a);
	}
}

void	all_cases(int stack_a[], int *top_a, int stack_b[], int *top_b)
{	
	int	size;

	size = *top_a + 1;
	if (issort_ed(stack_a, *top_a))
		exit(0);
	else if (size == 2)
		swap_a(stack_a, *top_a);
	else if (size == 3)
		sort_three(stack_a, *top_a);
	else if (size <= 15)
	{
		ls_tn_fifteen(stack_a, top_a, stack_b, top_b);
		if (!issort_ed(stack_a, *top_a))
			sort_three(stack_a, *top_a);
		while (*top_b >= 0)
			push_a(stack_a, top_a, stack_b, top_b);
	}
	else
		the_whole_way(stack_a, top_a, stack_b, top_b);
}

int	main(int ac, char **av)
{
	int	top_a;
	int	top_b;
	int	size;
	int	*stack_a;
	int	*stack_b;

	is_integer(ac - 1, av);
	size = n_ints(ac - 1, av);
	if (!size)
		return (0);
	stack_a = allocate(size);
	stack_b = allocate(size);
	top_a = size - 1;
	top_b = -1;
	fill_stack_a(stack_a, top_a, ac - 1, av);
	check_duplicate(stack_a, top_a);
	all_cases(stack_a, &top_a, stack_b, &top_b);
}
