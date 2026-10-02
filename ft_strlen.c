/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:50:33 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/02 16:38:15 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
		i++;
	return(i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "Hello";

// 	printf("%d", ft_strlen(str)) ;
// }
