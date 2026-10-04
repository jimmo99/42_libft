/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:23:29 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/04 15:55:06 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
	return (0);
		while (n > 0)
		{
		n--;
		((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
		}
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// size_t n = 9;
// char	src[] = "Hello my friend";
// char	dest[50];

// printf("%s\n", src);
// ft_memcpy(dest, src, n);
// printf("%s\n", dest);
// }
