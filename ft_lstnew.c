/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:42:34 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/10/30 15:26:39 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/* #include <stdio.h>
int	main(void)
{
	t_list	*firstnode;
	t_list	*secnode;
	int	num;

	num = 1584;
	firstnode = ft_lstnew("hellow world");
	secnode = ft_lstnew(&num);
	printf("%s\n", (char *)firstnode->content);
	printf("%d\n", *(int *)secnode->content);

	ft_lstadd_back(&firstnode, secnode);

	printf("%p", firstnode->next);
} */
