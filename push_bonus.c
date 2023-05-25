/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:39:17 by iobba             #+#    #+#             */
/*   Updated: 2022/12/17 14:51:23 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push_a(int stack_a[], int *top_a, int stack_b[], int *top_b)
{
	*top_a = *top_a + 1;
	stack_a[*top_a] = stack_b[*top_b];
	*top_b = *top_b - 1;
}

void	push_b(int stack_b[], int *top_b, int stack_a[], int *top_a)
{
	*top_b = *top_b + 1;
	stack_b[*top_b] = stack_a[*top_a];
	*top_a = *top_a - 1;
}
