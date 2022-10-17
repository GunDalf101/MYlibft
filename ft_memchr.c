/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <mbennani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 06:08:55 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/16 05:55:10 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	char				ch;
	const char			*s;

	ch = c;
	s = str;
	i = 0;
	while (i < n)
	{
		if (*s == c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s++;
		i++;
	}
	return (NULL);
}
