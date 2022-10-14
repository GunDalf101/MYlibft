/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <mbennani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:48:26 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/14 15:51:52 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list *p, *prev;
	prev = NULL;
	for (p = lst; p != NULL; p = p -> next) {
            if (strcmp(content, p -> item) == 0) {
		if(prev == NULL)
		   head = p-> next;
		else
		   prev -> next = p -> next;
		free(p -> item);
		free(p);
		return head;
	   }
	   prev = p;	
	} 
}