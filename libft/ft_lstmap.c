/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:27:28 by fremoor           #+#    #+#             */
/*   Updated: 2019/08/06 10:40:11 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *head;

	list = NULL;
	if (lst && f)
	{
		head = f(lst);
		list = head;
		lst = lst->next;
		while (lst)
		{
			head->next = f(lst);
			head = head->next;
			lst = lst->next;
		}
	}
	return (list);
}
