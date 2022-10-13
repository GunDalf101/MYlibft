/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:23:45 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/10 18:23:50 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ls;
	size_t	ld;
	size_t	l;
	size_t	i;
	size_t	j;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	l = ls + ld;
	i = 0;
	j = ld;
	if (size == 0 || size < ld)
		l = size + ls;
	while (src[i] != 0 && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (l);
}
