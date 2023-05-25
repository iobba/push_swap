/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:25:06 by iobba             #+#    #+#             */
/*   Updated: 2022/12/17 11:08:55 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(int stack[], int top)
{
	if (stack[2] > stack[1] && stack[0] > stack[2])
		swap_a(stack, top);
	else if (stack[2] > stack[1] && stack[0] < stack[2] && stack[0] < stack[1])
	{
		swap_a(stack, top);
		rotate_reverse_a(stack, top);
	}
	else if (stack[2] > stack[1] && stack[0] < stack[2] && stack[0] > stack[1])
		rotate_a(stack, top);
	else if (stack[2] < stack[1] && stack[0] > stack[2])
	{
		swap_a(stack, top);
		rotate_a(stack, top);
	}
	else
		rotate_reverse_a(stack, top);
}
