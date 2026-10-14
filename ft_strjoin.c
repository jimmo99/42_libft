/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:42:33 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/14 18:19:23 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		slen1;
	int		slen2;
	char	*newstring;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	newstring = malloc(slen1 + slen2 + 1);
	if (!newstring)
		return (NULL);
	ft_strlcat(newstring, s1, slen1 + slen2 + 1);
	ft_strlcat(newstring, s2, slen1 + slen2 + 1);
	return (newstring);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strjoin("hellow", "world"));
// }
