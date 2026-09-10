/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 22:32:43 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/10 18:00:56 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*s;

	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		p[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
