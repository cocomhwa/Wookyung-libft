/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 00:01:16 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/13 04:08:19 by wooshin          ###   ########.fr       */
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

static size_t	wordlen(char const *s, char c, size_t idx)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		length++;
	}
	return (length);
}

static char	**free_res(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

static char	*ft_strndup(const char *src, size_t n)
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
	dup[i] = 0;
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;
	size_t	res_idx;
	size_t	s_idx;	
	size_t	word_len;

	res_idx = 0;
	s_idx = 0;
	res = malloc(sizeof(char *) * (wordcounter(s, c) + 1));
	if (!res)
		return (0);
	while (res_idx < count)
	{
		while (s[s_idx] != c)
			s_idx++;
		word_len = wordlen(s, c, s_idx);
		res[res_idx] = ft_strndup(s, word_len);
		if (!res[res_idx])
			return (free_res(res));
		res_idx++;
		s_idx += word_len;
	}
	res[res_idx] = 0;
	return (res);
}