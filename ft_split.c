/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:02:56 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/10 01:16:25 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(const char *str, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (*str)
	{
		if (*str != c && num == 0)
		{
			num = 1;
			i++;
		}
		else if (*str == c)
			num = 0;
		str++;
	}
	return (i);
}

static char	*wordput(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		id;
	char	**doublestr;

	doublestr = malloc((wordcounter(s, c) + 1) * sizeof(char *));
	if (!s || !doublestr)
		return (0);
	i = 0;
	j = 0;
	id = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && id < 0)
			id = i;
		else if ((s[i] == c || i == ft_strlen(s)) && id >= 0)
		{
			doublestr[j++] = wordput(s, id, i);
			id = -1;
		}
		i++;
	}
	doublestr[j] = 0;
	return (doublestr);
}
