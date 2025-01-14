/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:23:18 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/06/22 12:39:34 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nuevalista;
	t_list	*objeto;

	if (!lst || !f || !del)
		return (NULL);
	nuevalista = NULL;
	while (lst)
	{
		objeto = ft_lstnew(f(lst->content));
		if (!objeto)
		{
			ft_lstclear(&nuevalista, del);
			return (NULL);
		}
		ft_lstadd_back(&nuevalista, objeto);
		lst = lst->next;
	}
	return (nuevalista);
}
