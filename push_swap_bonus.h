/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:59:55 by iobba             #+#    #+#             */
/*   Updated: 2022/12/19 15:50:49 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

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
int		f_c(const char *ms1, const char *ms2, size_t n);
int		issort_ed(int stack[], int top);
void	freeing(char **str);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strjoin(char *s1, char const *s2);

#endif
