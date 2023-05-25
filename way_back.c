/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   way_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:00:08 by iobba             #+#    #+#             */
/*   Updated: 2022/12/19 14:49:45 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	down_manager(int stack_a[], int top_a, int *down, int i)
{
	if (i == 1)
	{
		rotate_a(stack_a, top_a);
		*down = *down + 1;
	}
	else
	{
		rotate_reverse_a(stack_a, top_a);
		*down = *down - 1;
	}
}

void	to_top_b(int stack_b[], int top_b, int index)
{
	int	lvr_nbr;

	lvr_nbr = stack_b[index];
	if (index != top_b)
	{
		if (index >= (top_b + 1) / 2)
		{
			while (stack_b[top_b] != lvr_nbr)
				rotate_b(stack_b, top_b);
		}
		else
		{
			while (stack_b[top_b] != lvr_nbr)
				rotate_reverse_b(stack_b, top_b);
		}
	}
}

int	bgst_index(int stack_b[], int top_b, int biggest)
{
	int	i;

	i = 0;
	while (i <= top_b)
	{
		if (stack_b[i] == biggest)
			return (i);
		i++;
	}
	return (-1);
}

void	way_back(int stack_a[], int *t_a, int stack_b[], int *t_b)
{
	static int	i;
	static int	down;
	int			*helper;
	int			lvr_i;

	helper = helper_arr(stack_b, *t_b);
	while ((*t_b >= 0) || (down > 0))
	{
		i++;
		lvr_i = bgst_index(stack_b, *t_b, helper[(*t_a + *t_b + 2) - i]);
		if (lvr_i + 1)
		{
			while (bgst_index(stack_b, *t_b, helper[(*t_a + *t_b + 2) - i]) + 1)
			{	
				if ((down && stack_b[*t_b] < stack_a[0]) && *t_b != lvr_i)
					to_top_b(stack_b, *t_b, lvr_i);
				push_a(stack_a, t_a, stack_b, t_b);
				if (stack_a[*t_a] != helper[(*t_a + *t_b + 2) - i])
					down_manager(stack_a, *t_a, &down, 1);
			}
		}
		else
			down_manager(stack_a, *t_a, &down, 2);
	}
	free(helper);
}
