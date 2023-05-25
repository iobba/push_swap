/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:28:35 by iobba             #+#    #+#             */
/*   Updated: 2022/12/17 11:28:47 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	f_sign(int c)
{
	if (c == '-')
		return (-1);
	return (1);
}

long	ft_atoi(const char *s)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		sign = f_sign(s[i]);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - 48;
		if (result > 2147483647 && sign == 1)
			return (2147483650);
		if (result > 2147483648 && sign == -1)
			return (2147483650);
		i++;
	}
	return ((result) * sign);
}
