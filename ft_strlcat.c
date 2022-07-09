/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:43:31 by wooshin           #+#    #+#             */
/*   Updated: 2022/07/09 22:35:46 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	const size_t	dlen = ft_strlen(dst);
	const size_t	slen = ft_strlen(src);

	i = 0;
	j = 0;
	while (dst[i] != 0)
		i++;
	while (i + 1 < dstsize && (src[j] != 0))
		dst[i++] = src[j++];
	dst[i] = 0;
	if (dstsize < dlen)
		return (slen + dstsize);
	return (dlen + slen);
}
