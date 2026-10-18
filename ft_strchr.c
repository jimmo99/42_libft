/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:50:35 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/18 19:11:01 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	while (s[i])
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)s[i] == uc)
		return ((char *)&s[i]);
	return (NULL);
}
/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strchr("Hola 42 Urduliz", '4'));
	return (0);
} */
