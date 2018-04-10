/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:26:40 by cammapou          #+#    #+#             */
/*   Updated: 2018/04/10 11:26:42 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*st;
	size_t	i;

	i = 0;
	st = (char*)s;
	while (i < len)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (st);
}
