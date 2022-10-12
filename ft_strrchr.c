/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:18:03 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/07 04:24:55 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*save;

	save = NULL;
	while (str)
	{
		if (*str == c)
			save = ((char *)str);
		if (!*str)
			return (save);
		++str;
	}
	return (NULL);
}
