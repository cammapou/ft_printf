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

char			*ft_ulltoa(long long n)
{
	char	*s;
	long long	nb;
	int		len;

	if (n == -9223372036854775807)
		return (ft_strdup("-9223372036854775807"));
		len = 1;
		n < 0 ? ++len : 0;
		nb = n < 0 ? -n : n;
		while (nb > 9)
		{
			nb /= 10;
			++len;
		}
		s = (char*)malloc(sizeof(char) * (len + 1));
		s[len] = '\0';
		n < 0 ? *s = '-' : 0;
		n < 0 ? n = -n : 0;
		while (n > 9)
		{
			s[--len] = (n % 10) + 48;
			n /= 10;
		}
		s[--len] = n + 48;
		return (s);
	}
