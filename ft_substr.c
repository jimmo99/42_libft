/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:44:43 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/14 17:01:22 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(" "));
	if (len > slen - start)
		len = slen - start;
	sub = (char *)malloc (sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s [start], len +1);
	return (sub);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char const	*s = "HELLO WORLD";

// 	printf("%s", ft_substr(s, 3, 5));
// }
