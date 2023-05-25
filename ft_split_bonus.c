/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <iobba@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:29:29 by iobba             #+#    #+#             */
/*   Updated: 2022/12/17 11:29:52 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	count_words(char const *str, char c)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		num++;
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
	}
	return (num);
}

static int	word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static char	*word_dup(char *str, char c)
{
	int		len;
	int		i;
	char	*word;

	len = word_len(str, c);
	word = (char *) malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	fill_words(char **arr, char *str, char c)
{
	int	index;
	int	i;

	i = 0;
	while (str[i] == c)
		i++;
	index = 0;
	while (str[i])
	{
		arr[index] = word_dup(&str[i], c);
		if (arr[index] == NULL)
		{
			while (index != 0)
			{
				free(arr[index - 1]);
				index--;
			}
			exit(0);
		}
		index++;
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
	}
}

char	**ft_split(char const *str, char c)
{
	int		num_words;
	char	**arr;

	if (str == NULL)
		return (NULL);
	num_words = count_words((char *)str, c);
	arr = (char **) malloc((num_words + 1) * sizeof(char *));
	if (!arr)
		exit(0);
	arr[num_words] = NULL;
	if (num_words > 0)
		fill_words(arr, (char *)str, c);
	if (arr[0] == NULL && num_words != 0)
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}
