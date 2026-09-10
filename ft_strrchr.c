/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 18:52:44 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/10 18:26:21 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		if (i == 0)
		{
			break ;
		}
		i--;
	}
	return (NULL);
}
