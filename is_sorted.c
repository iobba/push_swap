/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:51:51 by iobba             #+#    #+#             */
/*   Updated: 2022/12/16 12:51:59 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int stack[], int top)
{
	int	i;

	i = 0;
	while (i < top)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	issort_ed(int stack[], int top)
{
	int	i;

	i = 0;
	while (i < top)
	{
		if (stack[i] < stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}
