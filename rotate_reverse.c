/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:35:36 by iobba             #+#    #+#             */
/*   Updated: 2022/12/16 12:55:00 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_reverse_a(int stack_a[], int top_a)
{
	int	tmp;
	int	i;

	tmp = stack_a[0];
	i = 0;
	while (i < top_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[top_a] = tmp;
	write(1, "rra\n", 4);
}

void	rotate_reverse_b(int stack_b[], int top_b)
{
	int	tmp;
	int	i;

	tmp = stack_b[0];
	i = 0;
	while (i < top_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[top_b] = tmp;
	write(1, "rrb\n", 4);
}

void	rotate_reverse_both(int stack_a[], int top_a, int stack_b[], int top_b)
{
	int	tmp;
	int	i;

	tmp = stack_a[0];
	i = 0;
	while (i < top_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[top_a] = tmp;
	tmp = stack_b[0];
	i = 0;
	while (i < top_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[top_b] = tmp;
	write(1, "rrr\n", 4);
}
