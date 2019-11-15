/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:06:46 by ccastill          #+#    #+#             */
/*   Updated: 2019/11/15 12:50:51 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*q;
	unsigned char	*p;
	int				l;

	q = (unsigned char*)src;
	p = (unsigned char*)dest;
	l = 0;
	while (n > 0)
	{
		p[l] = q[l];
		l++;
		n--;
	}
}
