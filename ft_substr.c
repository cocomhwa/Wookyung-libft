/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:48:15 by wooshin           #+#    #+#             */
/*   Updated: 2022/07/14 22:28:06 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sidx;
	char	*substring;	

	sidx = 0;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	ft_strlcpy(substring, s, len + 1);
	return (substring);
}
