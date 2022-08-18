/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:48:15 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/18 10:31:21 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*substring;	

	i = 0;
	slen = ft_strlen(s);
	if (slen < start)
		return (ft_strdup(""));
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	while (i < len && start + i < slen)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = 0;
	return (substring);
}
