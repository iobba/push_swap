/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_whole_way.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:53:43 by iobba             #+#    #+#             */
/*   Updated: 2022/12/19 14:10:33 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_top(int stack_a[], int top_a, int index)
{
	int	lvr_nbr;

	lvr_nbr = stack_a[index];
	if (index != top_a)
	{
		if (index >= (top_a + 1) / 2)
		{
			while (stack_a[top_a] != lvr_nbr)
				rotate_a(stack_a, top_a);
		}
		else
		{
			while (stack_a[top_a] != lvr_nbr)
				rotate_reverse_a(stack_a, top_a);
		}
	}
}

void	sort_helper(int	*helper, int top)
{
	int	i;
	int	temp;

	while (!is_sorted(helper, top))
	{
		i = 0;
		while (i < top)
		{
			if (helper[i] > helper[i + 1])
			{
				temp = helper[i];
				helper[i] = helper[i + 1];
				helper[i + 1] = temp;
			}
			i++;
		}
	}
}

int	*helper_arr(int stack[], int top)
{
	int	*helper;
	int	i;

	helper = (int *)malloc((top + 1) * sizeof(int));
	if (!helper)
		exit(0);
	i = 0;
	while (i <= top)
	{
		helper[i] = stack[i];
		i++;
	}
	sort_helper(helper, top);
	return (helper);
}

void	a_to_b(int stack_a[], int *top_a, int stack_b[], int *top_b)
{
	int			i;
	int			*helper;
	static int	group;
	static int	start;
	static int	end;

	helper = helper_arr(stack_a, *top_a);
	while (*top_a >= 0)
	{
		the_sides(&start, &end, &group, (*top_a + *top_b + 2));
		i = *top_a ;
		while (i >= 0)
		{
			if (stack_a[i] <= helper[end] && stack_a[i] >= helper[start])
			{
				to_top(stack_a, *top_a, i);
				push_b(stack_b, top_b, stack_a, top_a);
				if (stack_b[*top_b] <= helper[(*top_a + *top_b + 2) / 2])
					rotate_b(stack_b, *top_b);
				i = *top_a + 1;
			}
			i--;
		}
	}
	free(helper);
}

void	the_whole_way(int stack_a[], int *top_a, int stack_b[], int *top_b)
{
	a_to_b(stack_a, top_a, stack_b, top_b);
	way_back(stack_a, top_a, stack_b, top_b);
}
