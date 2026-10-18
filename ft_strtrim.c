/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:14:27 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/18 19:28:52 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*newstring;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isinset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_isinset(s1[end - 1], set))
		end--;
	newstring = malloc(end - start + 1);
	if (!newstring)
		return (NULL);
	i = 0;
	while (start < end)
	{
		newstring[i] = s1[start];
		i++;
		start++;
	}
	newstring[i] = '\0';
	return (newstring);
}
/* #include <stdio.h>

int	main(void)
{
	printf("%s", ft_strtrim("---hola-----", "-h"));
	return (0);
} */
