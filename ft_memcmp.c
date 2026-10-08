/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:41:45 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/08 12:43:50 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int	ft_memcmp(const void *s1, const void *s2, size_t n);

// int	main(void)
// {
// 	printf("%d\n", ft_memcmp("ab\0cd", "ab\0cd", 5));
// 	printf("%d\n", ft_memcmp("ab\0cd", "ab\0cz", 5));
// 	return (0);
// }
