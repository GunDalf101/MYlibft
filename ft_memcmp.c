/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 06:24:19 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/07 11:50:31 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t						i;
	const unsigned char			*s1;
	const unsigned char			*s2;

	i = 0;
	s1 = str1;
	s2 = str2;
	while (i < n - 1 && (s1[i] != 0 && s2[i] != 0))
		i++;
	if (s1[i] == 0 || s2[i] == 0)
		i--;
	return (s1[i] - s2[i]);
}
