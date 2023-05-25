/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:19:15 by iobba             #+#    #+#             */
/*   Updated: 2022/12/16 12:49:22 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write(1, "ra\n", 3);
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
	write (1, "rb\n", 3);
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
	write(1, "rr\n", 3);
}
