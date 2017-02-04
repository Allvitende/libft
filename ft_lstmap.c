/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 15:02:47 by bschroed          #+#    #+#             */
/*   Updated: 2017/02/03 15:24:24 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*i;

	if (!lst)
		return (NULL);
	new = f(lst);
	i = new;
	while (lst->next)
	{
		i->next = f(lst->next);
		i = i->next;
		lst = lst->next;
	}
	return (new);
}
