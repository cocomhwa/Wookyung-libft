/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:43:31 by wooshin           #+#    #+#             */
/*   Updated: 2022/07/07 09:48:20 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	while (dst[i] != '\0')
		i++;
	while (i + 1 < dstsize && (src[j] != '\0'))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < dlen)
		return (slen + dstsize);
	return (dlen + slen);
}
