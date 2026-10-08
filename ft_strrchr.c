/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:23:48 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/08 12:39:03 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>

// char	*ft_strrchr(const char *s, int c);

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("banana", 'n'));
// 	return (0);
// }
