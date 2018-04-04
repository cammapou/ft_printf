/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:41:23 by cammapou          #+#    #+#             */
/*   Updated: 2018/04/03 14:07:47 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_size(int n, unsigned long long *neg)
{
	unsigned long long	i;

	i = 1;
	*neg = 0;
	if (n < 0)
	{
		*neg = 1;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	if (*neg == 1)
		i = i + 1;
	return (i);
}

char			*ft_ulltoa(long n)
{
	unsigned long int	size;
	int					i;
	char				*str;
	unsigned long long	neg;

	if (n == -9223372036854775807)
		return (ft_strdup("-9223372036854775807"));
	size = ft_size(n, &neg);
	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = size;
	if (neg == 1)
		n = -n;
	while (i >= 0)
	{
		str[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	if (neg == 1)
		str[0] = '-';
	str[size] = '\0';
	return (str);
}
