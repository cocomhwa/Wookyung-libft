/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:11:17 by wooshin           #+#    #+#             */
/*   Updated: 2022/08/10 22:41:28 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	frnt;
	size_t	rear;

	frnt = 0;
	if (!s1 || !set)
		return (0);
	rear = ft_strlen(s1);
	while (s1[frnt] && ft_strchr(set, s1[frnt]))
		frnt++;
	while (rear && s1[rear - 1] && ft_strchr(set, s1[rear - 1]))
		rear--;
	res = ft_substr(s1, frnt, rear - frnt);
	if (res)
		ft_strlcpy(res, &s1[frnt], rear - frnt + 1);
	return (res);
}
