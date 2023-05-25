/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:51:32 by iobba             #+#    #+#             */
/*   Updated: 2022/12/16 12:58:57 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(int stack_a[], int *top_a, int stack_b[], int *top_b)
{
	*top_a = *top_a + 1;
	stack_a[*top_a] = stack_b[*top_b];
	*top_b = *top_b - 1;
	write(1, "pa\n", 3);
}

void	push_b(int stack_b[], int *top_b, int stack_a[], int *top_a)
{
	*top_b = *top_b + 1;
	stack_b[*top_b] = stack_a[*top_a];
	*top_a = *top_a - 1;
	write(1, "pb\n", 3);
}
