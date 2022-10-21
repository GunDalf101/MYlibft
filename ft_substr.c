/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <mbennani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:46:25 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/20 21:40:12 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s + start);
	if (ft_strlen(s) < start)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	if (size < len)
		len = size;
	str = malloc((len + 1) * sizeof(char));
	if (!str || !s)
		return (0);
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
