/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:27:29 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/04 14:11:36 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
// #include <stdio.h>
// int	main(void)
// {
// 	size_t n = 5;
// 	char	s[] = "Hello my friend";
// 	printf("%s\n", s);
// 	ft_bzero(s, n);
// 	printf("%s\n", s + 5);
// 	return (0);
// }
