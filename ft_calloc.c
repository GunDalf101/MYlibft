/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <mbennani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:59:26 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/21 03:48:43 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*v;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	if (nitems * size / nitems != size)
		return (NULL);
	v = malloc(nitems * size);
	if (v)
		ft_bzero (v, nitems * size);
	return (v);
}

/*int	main(void)
{
	int	*a;
	int i;
	a = calloc(18446744073, 1);
	i = 0;
	while(i < 40)
	{
		printf("%d ", a[i]);
		i++;
	}
	free(a);
	a = NULL;
}*/
