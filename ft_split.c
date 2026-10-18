/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:46:11 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/18 17:30:18 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_all(char **tab, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	*copy_word(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	start;
	size_t	end;
	size_t	k;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	start = 0;
	k = 0;
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		if (!s[start])
			break ;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		tab[k] = copy_word(s, start, end);
		if (!tab[k])
			return (free_all(tab, k));
		k++;
		start = end;
	}
	tab[k] = NULL;
	return (tab);
}
