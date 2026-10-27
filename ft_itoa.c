/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 23:35:57 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/27 12:18:29 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_length(long number)
{
	size_t	length;

	length = 0;
	if (number <= 0)
	{
		length = 1;
		number = -number;
	}
	while (number > 0)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	number;
	size_t	length;

	number = n;
	length = count_length(number);
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (number == 0)
		str[0] = '0';
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		length--;
		str[length] = (number % 10) + '0';
		number = number / 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(-42);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
