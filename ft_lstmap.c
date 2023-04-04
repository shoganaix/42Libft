/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:41:58 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 18:00:04 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	t_list	*aux;

	result = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		aux = (*f)(lst -> content);
		new = ft_lstnew(aux);
		if (!new || !aux)
		{
			del(aux);
			ft_lstclear(&result, del);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new);
		lst = lst -> next;
	}
	return (result);
}
