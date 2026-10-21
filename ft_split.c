/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:46:11 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/21 11:14:41 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char delimiter)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == delimiter)
			i++;
		if (str[i] && str[i] != delimiter)
		{
			count++;
			while (str[i] && str[i] != delimiter)
				i++;
		}
	}
	return (count);
}

static char	**free_array(char **tab, size_t count)
{
	while (count > 0)
	{
		count--;
		free(tab[count]);
	}
	free(tab);
	return (NULL);
}

static char	*copy_word(char const *str, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static int	fill_tab(char **tab, char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	i = 0;
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
		{
			tab[i] = copy_word(s, start, end);
			if (!tab[i])
				return (free_array(tab, i), 0);
			i++;
		}
		start = end;
	}
	tab[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (!fill_tab(result, s, c))
		return (NULL);
	return (result);
}
/* #include <stdio.h>

int	main(void)
{
	char	**array;

	array = ft_split("Hello&world", '&');

	int	i;

	i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
} */
/* #include <stdio.h>

int	main(void)
{
	char	**array;

	array = ft_split("Hello&world", '&');
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);

	free(array[0]);
	free(array[1]);
	free(array);
} */
