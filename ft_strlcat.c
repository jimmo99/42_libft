/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:39:57 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/06 18:42:44 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1) < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[20] = "Hello, ";
// 	char	src[] = "world!";
// 	size_t	ret;

// 	ret = ft_strlcat(dst, src, sizeof(dst));

// 	printf("result: %s\n", dst);
// 	printf("ret: %zu\n", ret);

// 	return (0);
// }
