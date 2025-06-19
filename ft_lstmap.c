/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdemetra <gdemetra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 19:13:47 by gdemetra          #+#    #+#             */
/*   Updated: 2025/06/19 21:59:12 by gdemetra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_print_list_t(t_list *node)
// {
// 	t_list	*curr_node;

// 	curr_node = node;
// 	while (curr_node)
// 	{
// 		printf("%s", (char *)curr_node->content);
// 		curr_node = curr_node->next;
// 	}
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
}

void	*ft_delegate(void *content)
{
}

void	ft_del_content(void *content)
{
}

// int	main(void)
// {
// 	t_list	*begin;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*res;

// 	begin = NULL;
// 	node1 = ft_lstnew((void *)ft_strdup("First "));
// 	node2 = ft_lstnew((void *)ft_strdup("Second "));
// 	node3 = ft_lstnew((void *)ft_strdup("Third "));
// 	ft_lstadd_back(&begin, node1);
// 	ft_lstadd_back(&begin, node2);
// 	ft_lstadd_back(&begin, node3);
// 	ft_print_list_t(begin);
// 	res = ft_lstmap(begin, ft_delegate, ft_del_content);
// 	printf("\n");
// 	ft_print_list_t(res);
// 	return (0);
// }
