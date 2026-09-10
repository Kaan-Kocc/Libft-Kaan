/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 01:43:55 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/11 00:42:23 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_counter(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	i = 0;
	word_count = 0;
	if (!s[i])
		return (0);
	if (s[i] != c)
		word_count++;
	i++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			word_count++;
		i++;
	}
	return (word_count);
}

static size_t	ft_wordlen(char const *s, size_t start, char c)
{
	size_t	i;

	i = 0;
	while (s[start + i] && s[start + i] != c)
		i++;
	return (i);
}

static void	ft_free_split(char **result, size_t j)
{
	while (j > 0)
	{
		j--;
		free(result[j]);
	}
	free(result);
}

static char	**ft_fill_split(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = ft_wordlen(s, i, c);
		result[j] = ft_substr(s, i, len);
		if (!result[j])
		{
			ft_free_split(result, j);
			return (NULL);
		}
		i += len;
		j++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!result)
		return (NULL);
	return (ft_fill_split(result, s, c));
}
