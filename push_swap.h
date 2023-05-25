/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:14:44 by iobba             #+#    #+#             */
/*   Updated: 2022/12/19 14:59:27 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

long	ft_atoi(const char *s);
char	**ft_split(char const *str, char c);
void	swap_a(int stack[], int top);
void	swap_b(int stack[], int top);
void	swap_both(int stack_a[], int top_a, int stack_b[], int top_b);
void	push_a(int stack_a[], int *top_a, int stack_b[], int *top_b);
void	push_b(int stack_b[], int *top_b, int stack_a[], int *top_a);
void	rotate_a(int stack_a[], int top_a);
void	rotate_b(int stack_b[], int top_b);
void	rotate_both(int stack_a[], int top_a, int stack_b[], int top_b);
void	rotate_reverse_a(int stack_a[], int top_a);
void	rotate_reverse_b(int stack_b[], int top_b);
void	rotate_reverse_both(int stack_a[], int top_a, int stack_b[], int top_b);
void	errore(void);
void	is_integer(int size, char **av);
int		n_ints(int size, char **av);
int		*allocate(int size);
void	fill_stack_a(int stack_a[], int top_a, int size, char **av);
int		is_sorted(int stack[], int top);
int		issort_ed(int stack[], int top);
void	sort_three(int stack[], int top);
void	the_whole_way(int stack_a[], int *top_a, int stack_b[], int *top_b);
void	the_sides(int *start, int *end, int *group, int size);
void	way_back(int stack_a[], int *top_a, int stack_b[], int *top_b);
int		*helper_arr(int stack[], int top);
void	freeing(char **str);

#endif
