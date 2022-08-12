/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:01:16 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/12 05:49:37 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	getlen(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

static char	*ft_strndup(char *src, size_t n)
{
	size_t	i;
	char	*dup;

	i = 0;
	if (!src)
		return (0);
	dup = malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (0);
	while (i < n)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	wordlen;	
	size_t	count;
	size_t	i;

	count = wordcounter(s, c);
	i = 0;
	res = malloc(sizeof(char *) * count + 1);
	if (!res)
		return (0);
	while (i < count)
	{
	}
}
