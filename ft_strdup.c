/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 10:27:42 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/12 13:03:21 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, len);
	return (dup);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*orig = "Hellow 42";
// 	char	*copia;

// 	copia = ft_strdup(orig);
// 	printf("Original: %s\n", orig);
// 	printf("Copia:    %s\n", copia);
// 	free(copia);
// 	return (0);

// }
