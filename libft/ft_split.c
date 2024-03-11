/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:55:48 by emmera            #+#    #+#             */
/*   Updated: 2024/03/11 16:44:36 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char delimiter)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		if (*s != delimiter)
		{
			count++;
			while (*s && *s != delimiter)
				s++;
		}
	}
	return (count);
}

static void	free_all(char **arr, int j)
{
	while (j >= 0)
	{
		free(arr[j]);
		j--;
	}
}

static int	count_letters(char const *s, char d)
{
	int	count;

	count = 0;
	while (s[count] != 0 && s[count] != d)
		count++;
	return (count);
}

static int	fill_lst(char **dst, char const *src, char d)
{
	int	wlen;
	int	i;

	wlen = 0;
	i = 0;
	while (src[wlen] != 0)
	{
		if (src[wlen] == d)
			wlen++;
		if (src[wlen] != d)
		{
			src = src + wlen;
			wlen = count_letters(src, d);
			dst[i] = (char *)malloc((wlen + 1) * sizeof(char));
			if (dst[i] == 0)
			{
				free_all(dst, i);
				return (0);
			}
			ft_strlcpy(dst[i], src, wlen + 1);
			i++;
		}
	}
	dst[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	split_number;

	split_number = count_words(s, c) + 1;
	lst = (char **)ft_calloc(split_number, sizeof(char *));
	if (!lst || !s)
		return (NULL);
	if (fill_lst(lst, s, c) == 0)
	{
		free(lst);
		return (NULL);
	}
	return (lst);
}

/* static void	print_array(char **s)
{
	char	**temp;

	temp = s;
	while (*temp)
		printf("%s\n", *temp++);
	printf("\n");
}

int	main()
{
	char *str = "I love cats, I love every kind of cats.";
	char **split_array = ft_split(str, ',');
	print_array(split_array);

	char **split_array_2 = ft_split(str, ' ');
	print_array(split_array_2);

	char **split_array_3 = ft_split(str, 'c');
	print_array(split_array_3);

	return (0);
} */
