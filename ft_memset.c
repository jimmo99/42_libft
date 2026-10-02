/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 16:53:48 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/02 19:14:30 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	int	c = 'c';
	size_t n = 5;
	char	*s = "Hello my friend";

	printf("%s", s);
	ft_memset(s, c, n);
	printf("%s", s);
}
