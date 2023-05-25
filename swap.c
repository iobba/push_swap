/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:07:39 by iobba             #+#    #+#             */
/*   Updated: 2022/12/16 12:55:33 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(int stack[], int top)
{
	int	tmp;

	tmp = stack[top];
	stack[top] = stack[top - 1];
	stack[top - 1] = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(int stack[], int top)
{
	int	tmp;

	tmp = stack[top];
	stack[top] = stack[top - 1];
	stack[top - 1] = tmp;
	write(1, "sb\n", 3);
}

void	swap_both(int stack_a[], int top_a, int stack_b[], int top_b)
{
	int	tmp;

	tmp = stack_a[top_a];
	stack_a[top_a] = stack_a[top_a - 1];
	stack_a[top_a - 1] = tmp;
	tmp = stack_b[top_b];
	stack_b[top_b] = stack_b[top_b - 1];
	stack_b[top_b - 1] = tmp;
	write(1, "ss\n", 3);
}
