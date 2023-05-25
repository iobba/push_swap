/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:59:02 by iobba             #+#    #+#             */
/*   Updated: 2022/12/19 16:31:21 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	instrs_with_a(int stack_a[], int top_a, char *instr)
{
	if (!f_c(instr, "sa\n", 4))
		swap_a(stack_a, top_a);
	else if (!f_c(instr, "ra\n", 4))
		rotate_a(stack_a, top_a);
	else
		rotate_reverse_a(stack_a, top_a);
}

void	instrs_with_b(int stack_b[], int top_b, char *instr)
{
	if (!f_c(instr, "sb\n", 4))
		swap_b(stack_b, top_b);
	else if (!f_c(instr, "rb\n", 4))
		rotate_b(stack_b, top_b);
	else
		rotate_reverse_b(stack_b, top_b);
}

void	check_duplicate(int stack[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (stack[i] == stack[j])
				errore();
			j++;
		}
		i++;
	}
}

void	all_cases(int stack_a[], int *top_a, int stack_b[], int *top_b)
{
	char	*s;

	while (1)
	{
		s = get_next_line(0);
		if (!s)
			break ;
		if (!f_c(s, "sa\n", 4) || !f_c(s, "ra\n", 4) || !f_c(s, "rra\n", 5))
			instrs_with_a(stack_a, *top_a, s);
		else if (!f_c(s, "sb\n", 4) || !f_c(s, "rb\n", 4) || !f_c(s, "rrb\n", 5))
			instrs_with_b(stack_b, *top_b, s);
		else if (!f_c(s, "ss\n", 4))
			swap_both(stack_a, *top_a, stack_b, *top_b);
		else if (!f_c(s, "pa\n", 4))
			push_a(stack_a, top_a, stack_b, top_b);
		else if (!f_c(s, "pb\n", 4))
			push_b(stack_b, top_b, stack_a, top_a);
		else if (!f_c(s, "rr\n", 4))
			rotate_both(stack_a, *top_a, stack_b, *top_b);
		else if (!f_c(s, "rrr\n", 5))
			rotate_reverse_both(stack_a, *top_a, stack_b, *top_b);
		else
			errore();
		free(s);
	}
}

int	main(int ac, char **av)
{
	int	top_a;
	int	top_b;
	int	size;
	int	*stack_a;
	int	*stack_b;

	is_integer(ac - 1, av);
	size = n_ints(ac - 1, av);
	if (!size)
		return (0);
	stack_a = allocate(size);
	stack_b = allocate(size);
	top_a = size - 1;
	top_b = -1;
	fill_stack_a(stack_a, top_a, ac - 1, av);
	check_duplicate(stack_a, top_a);
	all_cases(stack_a, &top_a, stack_b, &top_b);
	if (issort_ed(stack_a, top_a) && top_b == -1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
