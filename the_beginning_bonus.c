/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_beginning_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:23:15 by iobba             #+#    #+#             */
/*   Updated: 2022/12/17 11:23:48 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	is_integer(int size, char **av)
{
	static int	i;
	int			j;
	char		**arr;
	int			k;

	while (i < size)
	{
		arr = ft_split(av[++i], ' ');
		k = 0;
		while (arr[k])
		{
			j = 0;
			if ((arr[k][j] == '-' || arr[k][j] == '+') && arr[k][j + 1] != 0)
				j++;
			while (arr[k][j])
			{
				if (arr[k][j] < '0' || arr[k][j] > '9')
					errore();
				j++;
			}
			k++;
		}
		freeing(arr);
	}
}

int	n_ints(int size, char **av)
{
	int		i;
	int		k;
	int		n;
	char	**arr;

	i = 1;
	n = 0;
	while (i <= size)
	{
		arr = ft_split(av[i], ' ');
		if (arr[0] == NULL)
			errore();
		k = 0;
		while (arr[k])
		{
			if (ft_atoi(arr[k]) == 2147483650)
				errore();
			n++;
			k++;
		}
		i++;
		freeing(arr);
	}
	return (n);
}

int	*allocate(int size)
{
	int	*stack;

	stack = (int *)malloc(size * sizeof(int));
	if (!stack)
		exit(0);
	return (stack);
}

void	fill_stack_a(int stack_a[], int top_a, int size, char **av)
{
	int		i;
	int		k;
	char	**arr;
	int		n;

	i = 1;
	n = top_a;
	while (i <= size)
	{
		arr = ft_split(av[i], ' ');
		k = 0;
		while (arr[k])
		{
			stack_a[n] = ft_atoi(arr[k]);
			n--;
			k++;
		}
		i++;
		freeing(arr);
	}
}
