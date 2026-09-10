/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:00:57 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/11 00:11:57 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlength(int n)
{
	int		length;
	long	n_long;

	n_long = n;
	length = 0;
	if (n_long < 0)
	{
		length++;
		n_long *= -1;
	}
	while (n_long >= 10)
	{
		length++;
		n_long = n_long / 10;
	}
	length++;
	return (length);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		length;
	long	n_long;

	n_long = n;
	length = ft_intlength(n);
	number = malloc(sizeof(char) * (length + 1));
	if (!number)
		return (NULL);
	if (n_long < 0)
	{
		number[0] = '-';
		n_long *= -1;
	}
	number[length] = '\0';
	while ((n < 0 && length > 1) || (n >= 0 && length > 0))
	{
		number[length - 1] = (n_long % 10) + '0';
		n_long = n_long / 10;
		length--;
	}
	return (number);
}
