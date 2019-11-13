/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:52:02 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/13 15:52:02 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *q;
	unsigned char *p;
	size_t x;

	q = (unsigned char*)src;
	p = (unsigned char*)dest;
	x = 0;

	while (x < n)
	{
		p[x] = q[x];
		if (q[x] == (unsigned char)c)
		return ((void*)p + x + 1);
		x++;
	}
	return (NULL);
}