/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <mbennani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:59:26 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/13 09:22:58 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*v;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	v = malloc(nitems * size);
	if (v)
		ft_bzero (v, nitems * size);
	return (v);
}
