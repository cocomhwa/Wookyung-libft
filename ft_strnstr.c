/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:52:42 by wooshin           #+#    #+#             */
/*   Updated: 2022/07/08 15:44:03 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int		j;

	i = -1;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[++i] != '\0' && i < len)
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while ((needle[j] != '\0' || haystack[j + i] != '\0')
				&& (needle[j] == haystack[j + i]))
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char  *)haystack + i);
		}
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char a[] = "aaaaaaaaaaaaa";
	char b[] = "b";

	printf("%s\n", strnstr(a, b, 3));
	printf("%s\n", ft_strnstr(a, b, 3));
	printf("======ex04======\n");
	char haystack[20] = "abcabcabcdabc";
	char needle[20] = "abcd";
	char haystack1[20] = "hello hello";
	char needle1[20] = "o h";
	printf("%s %s\n", strnstr(haystack, needle, 3), ft_strnstr(haystack, needle, 3));
	printf("%s %s\n", strnstr(haystack1, needle1, 7), ft_strnstr(haystack1, needle1, 7));
}

