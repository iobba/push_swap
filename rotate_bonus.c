/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:41:35 by iobba             #+#    #+#             */
/*   Updated: 2022/12/17 14:52:31 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate_a(int stack_a[], int top_a)
{
	int	tmp;
	int	len;

	tmp = stack_a[top_a];
	len = top_a;
	while (len > 0)
	{
		stack_a[len] = stack_a[len - 1];
		len--;
	}
	stack_a[0] = tmp;
}

void	rotate_b(int stack_b[], int top_b)
{
	int	tmp;
	int	len;

	tmp = stack_b[top_b];
	len = top_b;
	while (len > 0)
	{
		stack_b[len] = stack_b[len - 1];
		len--;
	}
	stack_b[0] = tmp;
}

void	rotate_both(int stack_a[], int top_a, int stack_b[], int top_b)
{
	int	tmp;
	int	len;

	tmp = stack_a[top_a];
	len = top_a;
	while (len > 0)
	{
		stack_a[len] = stack_a[len - 1];
		len--;
	}
	stack_a[0] = tmp;
	tmp = stack_b[top_b];
	len = top_b;
	while (len > 0)
	{
		stack_b[len] = stack_b[len - 1];
		len--;
	}
	stack_b[0] = tmp;
}
