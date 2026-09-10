/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:14:09 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/10 17:59:47 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	const unsigned char	*s;

	i = 0;
	p = (const unsigned char *)s1;
	s = (const unsigned char *)s2;
	while (i < n)
	{
		if (p[i] != s[i])
			return (p[i] - s[i]);
		i++;
	}
	return (0);
}
