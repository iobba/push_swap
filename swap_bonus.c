/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:42:51 by iobba             #+#    #+#             */
/*   Updated: 2022/12/17 13:45:54 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap_a(int stack[], int top)
{
	int	tmp;

	tmp = stack[top];
	stack[top] = stack[top - 1];
	stack[top - 1] = tmp;
}

void	swap_b(int stack[], int top)
{
	int	tmp;

	tmp = stack[top];
	stack[top] = stack[top - 1];
	stack[top - 1] = tmp;
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
}
