/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <mbennani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:18:03 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/16 10:55:08 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*save;

	save = NULL;
	while (1 != 0)
	{
		if (*str == c)
			save = ((char *)str);
		if (!*str)
			return (save);
		str++;
	}
	return (NULL);
}
