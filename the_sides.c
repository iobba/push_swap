/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_sides.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:53:43 by iobba             #+#    #+#             */
/*   Updated: 2022/12/16 14:22:26 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_ng(int size)
{
	if (size <= 150)
		return (6);
	else
		return (18);
}

void	check_sides(int *start, int *end, int size)
{
	if (*end >= size)
		*end = size - 1;
	if (*start < 0)
		*start = 0;
}

void	the_sides(int *start, int *end, int *group, int size)
{
	if (*start == 0 && *end == 0 && *group == 0)
	{
		*group = size / get_ng(size);
		*start = size / 2;
		*end = size / 2;
	}
	*start = *start - *group;
	*end = *end + *group;
	check_sides(start, end, size);
}
