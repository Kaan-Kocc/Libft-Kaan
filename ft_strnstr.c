/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 21:47:43 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/10 18:15:05 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	control;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		control = i;
		if (big[i] == little[j])
		{
			while (i < len && big[i] && big[i] == little[j])
			{
				i++;
				j++;
				if (little[j] == '\0')
					return ((char *)(big + control));
			}
		}
		i = control + 1;
	}
	return (NULL);
}
