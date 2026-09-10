/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 21:30:14 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/11 00:27:04 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p;
	const char	*s;

	i = 0;
	p = (char *)dest;
	s = (const char *)src;
	if (s < p)
	{
		while (n > 0)
		{
			n--;
			p[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			p[i] = s[i];
			i++;
		}
	}
	return (dest);
}
