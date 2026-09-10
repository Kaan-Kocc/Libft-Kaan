/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 01:11:44 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/10 18:10:49 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*arr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	arr = malloc(sizeof(char) * (ft_strlen (s1) + ft_strlen (s2)+ 1));
	if (arr == NULL)
		return (NULL);
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	arr[i] = '\0';
	return (arr);
}
